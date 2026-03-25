#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define FILE_NAME "users.dat"

typedef struct {
    int acc_no;
    char name[100];
    float balance;
    int pin;
} User;

User users[100];
int user_count = 0;
int logged_in_index = -1;

void load_users();
void save_users();
void create_account();
void login();
void home_page();
void deposit();
void withdraw();
void check_balance();

int main() {
    srand(time(NULL));
    load_users();

    int choice;
    while (1) {
        system("cls");
        printf("\n=== BANK SYSTEM ===\n");
        printf("1. Login\n");
        printf("2. Create Account\n");
        printf("3. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) login();
        else if (choice == 2) create_account();
        else if (choice == 3)
        {
            Sleep(1000);
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
            getchar(); getchar();
        }
    }
    return 0;
}

void load_users() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file) {
        fread(&user_count, sizeof(int), 1, file);
        fread(users, sizeof(User), user_count, file);
        fclose(file);
    }
}

void save_users() {
    FILE *file = fopen(FILE_NAME, "wb");
    if (file) {
        fwrite(&user_count, sizeof(int), 1, file);
        fwrite(users, sizeof(User), user_count, file);
        fclose(file);
    }
}

void create_account() {
    system("cls");
    printf("\n=== CREATE ACCOUNT ===\n");
    
    User user;
    user.acc_no = 1000 + rand() % 9000;
    
    printf("Enter name: ");
    scanf(" %[^\n]", user.name);
    
    printf("Enter deposit: ");
    scanf("%f", &user.balance);
    
    printf("Set 4-digit PIN: ");
    scanf("%d", &user.pin);
    
    users[user_count] = user;
    user_count++;
    save_users();
    
    printf("\nAccount created successfully!\n");
    printf("Account No: %d\n", user.acc_no);
    printf("Press any key to continue...");
    getchar(); getchar();
}

void login() {
    system("cls");
    printf("\n=== LOGIN ===\n");
    
    int acc, pin;
    printf("Account No: ");
    scanf("%d", &acc);
    printf("PIN: ");
    scanf("%d", &pin);
    
    for (int i = 0; i < user_count; i++) {
        if (users[i].acc_no == acc && users[i].pin == pin) {
            logged_in_index = i;
            printf("\nWelcome %s!\n", users[i].name);
            printf("Press any key to continue...");
            getchar(); getchar();
            home_page();
            return;
        }
    }
    printf("\nLogin failed! Invalid account or PIN.\n");
    printf("Press any key to continue...");
    getchar(); getchar();
}

void home_page() {
    int choice;
    while (1) {
        system("cls");
        printf("\n=== BANK MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Logout\n");
        printf("Choose: ");
        scanf("%d", &choice);
        
        if (choice == 1) check_balance();
        else if (choice == 2) deposit();
        else if (choice == 3) withdraw();
        else if (choice == 4) {
            logged_in_index = -1;
            printf("\nLogged out successfully!\n");
            printf("Press any key to continue...");
            getchar(); getchar();
            break;
        }
        else {
            printf("Invalid choice!\n");
            getchar(); getchar();
        }
    }
}

void check_balance() {
    system("cls");
    printf("\n=== BALANCE ===\n");
    printf("Account No: %d\n", users[logged_in_index].acc_no);
    printf("Name: %s\n", users[logged_in_index].name);
    printf("Balance: $%.2f\n", users[logged_in_index].balance);
    printf("\nPress any key to continue...");
    getchar(); getchar();
}

void deposit() {
    system("cls");
    printf("\n=== DEPOSIT ===\n");
    
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    
    if (amount > 0) {
        users[logged_in_index].balance += amount;
        save_users();
        printf("\nDeposit successful!\n");
        printf("New balance: $%.2f\n", users[logged_in_index].balance);
    } else {
        printf("\nInvalid amount!\n");
    }
    printf("Press any key to continue...");
    getchar(); getchar();
}

void withdraw() {
    system("cls");
    printf("\n=== WITHDRAW ===\n");
    
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    
    if (amount > 0 && amount <= users[logged_in_index].balance) {
        users[logged_in_index].balance -= amount;
        save_users();
        printf("\nWithdrawal successful!\n");
        printf("New balance: $%.2f\n", users[logged_in_index].balance);
    } else {
        printf("\nInvalid amount or insufficient balance!\n");
    }
    printf("Press any key to continue...");
    getchar(); getchar();
}