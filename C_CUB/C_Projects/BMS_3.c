#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define FILE_NAME "users.json"    //json file declared

typedef struct {
    int acc_no;
    char name[100];
    float balance;
    int pin;
} User;

User users[100];
int user_count = 0;
int logged_in_index = -1; // which user is logged in

// my necessary functions=============================
void load_users();
void save_users();
int account_exists(int acc_no);
void create_account();
void login();
void home_page();
void deposit();
void withdraw();
void check_balance();
void show_all_users();



int main() {
    srand(time(NULL));
    load_users();

    int choice;
    while (1) {
        system("cls");
        printf("\n==== SIMPLE BANK SYSTEM ====\n");
        printf("1. Log In\n");
        printf("2. Sign Up\n");
        printf("3. Show All Accounts (for test)\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            login();
        }
        else if (choice == 2) {
            create_account();
        }
        else if (choice == 3) {
            show_all_users();
        }
        else if (choice == 4) {
            printf("\nGoodbye!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
            Sleep(1000);
        }
    }
    return 0;
}

// -------------------- FILE SYSTEM FOR FILE HANDLING --------------------
void load_users() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        file = fopen(FILE_NAME, "w"); // create file if not exist || file write 'w'
        fclose(file);
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file))
    {
        int acc;
        char name[100];
        float balance;
        int pin;

        int parsed = sscanf(line,
            "{ \"acc_no\":%d, \"name\":\"%[^\"]\", \"balance\":%f, \"pin\":%d }",
            &acc, name, &balance, &pin);

        if (parsed == 4)
        {
            users[user_count].acc_no = acc;
            strcpy(users[user_count].name, name);
            users[user_count].balance = balance;
            users[user_count].pin = pin;
            user_count++;
        }
    }
    fclose(file);
}

//saving the users info
void save_users() {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error opening file for saving!\n");
        return;
    }

    for (int i = 0; i < user_count; i++) {
        fprintf(file,
            "{ \"acc_no\":%d, \"name\":\"%s\", \"balance\":%.2f, \"pin\":%d }\n",
            users[i].acc_no, users[i].name, users[i].balance, users[i].pin);
    }
    fclose(file);
}

// -------------------- ACCOUNT SYSTEM --------------------
int account_exists(int acc_no) {
    for (int i = 0; i < user_count; i++) {
        if (users[i].acc_no == acc_no)
            return 1;
    }
    return 0;
}

//For New Account
void create_account() {
    system("cls");
    printf("\n=== CREATE NEW ACCOUNT ===\n");

    int new_acc;
    do
    {
        new_acc = 1000 + rand() % 9000;
    } while (account_exists(new_acc));

    User user;
    user.acc_no = new_acc;

    printf("Enter your name: ");
    fflush(stdin);
    fgets(user.name, sizeof(user.name), stdin);
    user.name[strcspn(user.name, "\n")] = '\0';

    printf("Enter first deposit: ");
    scanf("%f", &user.balance);

    printf("Set 4-digit pin: ");
    scanf("%d", &user.pin);

    users[user_count] = user;
    user_count++;

    save_users();

    printf("\nYour Account Created Successfully!\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", user.name, user.acc_no, user.balance);
    Sleep(3000);
}

//The Login Part
void login()
{
    system("cls");
    printf("\n=== LOGIN ===\n");

    int acc, pin;
    printf("Enter account number: ");
    scanf("%d", &acc);

    printf("Enter PIN: ");
    scanf("%d", &pin);

    for (int i = 0; i < user_count; i++)
    {
        if (users[i].acc_no == acc && users[i].pin == pin)
        {
            logged_in_index = i;
            printf("\nWelcome back, %s!\n", users[i].name);
            Sleep(1500);
            home_page();
            return;
        }
    }
    printf("\nInvalid account number or PIN!\n");
    Sleep(2000);
}

void home_page()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n=== BANK MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            check_balance();
        else if (choice == 2)
            deposit();
        else if (choice == 3)
            withdraw();
        else if (choice == 4)
        {
            logged_in_index = -1;
            printf("\nLogged out successfully!\n");
            Sleep(1000);
            break;
        }
        else
        {
            printf("Invalid choice!\n");
            Sleep(1000);
        }
    }
}

// -------------------- BANKING FEATURES --------------------
//===========1
void check_balance()
{
    system("cls");
    printf("\n=== BALANCE CHECK ===\n");
    printf("\nAccount No: %d\n", users[logged_in_index].acc_no);
    printf("\nName: %s\n", users[logged_in_index].name);
    printf("\nCurrent Balance is: %.2f\n", users[logged_in_index].balance);
    printf("\nPress any key to return...");
    getchar(); getchar();
}

//===============2
void deposit()
{
    system("cls");
    printf("\n=== DEPOSIT ===\n");
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        Sleep(1500);
        return;
    }
    if (amount <= 50)
        printf("\nwhy so poor?");
        Sleep(500);
        printf("\naro beshi taka de");
        Sleep(500);
        printf("\nfokir naki tumi?")

    users[logged_in_index].balance += amount;
    save_users();
    printf("\nDeposited successfully!");
    printf("\nNew balance: %.2f", users[logged_in_index].balance);
    Sleep(2000);
}

//===============3
void withdraw()
{
    system("cls");
    printf("\n=== WITHDRAW ===\n");
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        Sleep(1500);
        return;
    }

    if (amount > users[logged_in_index].balance)
    {
        printf("Insufficient balance!\n");
        Sleep(1500);
        return;
    }

    users[logged_in_index].balance -= amount;
    save_users();
    printf("Withdraw successful! New balance: %.2f\n", users[logged_in_index].balance);
    Sleep(2000);
}

//===============4
void show_all_users()
{
    system("cls");
    printf("\n=== ALL ACCOUNTS ===\n");
    for (int i = 0; i < user_count; i++)
    {
        printf("%d. %s | Acc No: %d | Balance: %.2f | Pin: %d\n",
               i + 1, users[i].name, users[i].acc_no, users[i].balance, users[i].pin);
    }
    printf("\nPress any key to return...");
    getchar(); getchar();
}