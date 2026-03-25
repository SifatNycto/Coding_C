#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

//functions=====================
void create_account();
void home_page();
void deposit();

typedef struct
{
    int acc_no;
    char name[100];
    float balance;
    int pin;
} User;                //structure ke ekta short name disi "User"

User user = {0};  //user variable disi and vitorer 4 ta datar value gulake initially zero banaisi




int main()
{
    int choice;
    srand(time(NULL));

    while(1)
    {
        system("cls");

        int sign_opt;
        printf("\n\t1. Log in");
        printf("\t\t2. Sign Up");
        scanf("%d", &sign_opt);

        if (sign_opt == 1)
        {
            Sleep(500);
            printf("\nEnter your account number: ");
            scanf("%d", &user.acc_no);

            Sleep(500);
            printf("\nEnter your Pin: ");
            scanf("%d", &user.pin);

            home_page();
        }
        else if (sign_opt == 2)
        {
            Sleep(1000);
            create_account();
            Sleep(2000);
            home_page();

        }
        else
        {
            printf("\nInvalid Input %s!!!", user.name);
            Sleep(1000);
            printf("\nPlease Try Again %s.", user.name);
        }
    }

    return 0;
}



void create_account()
{
    system("cls");
    printf("\n\n=== CREATE NEW ACCOUNT ===");

    user.acc_no = 1000 + rand() % 9000; //4 digit random account num generate korbe

    printf("\nEnter your name: ");
    fflush(stdin);
    fgets(user.name, sizeof(user.name), stdin);
    user.name[strcspn(user.name, "\n")] = '\0';

    printf("\nEnter initial deposit: ");
    scanf("%.2f", user.balance);

    printf("\nSet 4-digit pin: ");
    scanf("%d", user.pin);
    
    printf("\n\tAccount created successfully.");
    printf("\n\t%s, Your Account Number: %d", user.acc_no);
    Sleep(3000);
}

void check_balance()
{
    system("cls");
    printf("\n\n\t=== BALANCE ===\n");
    printf("%s, Your balance: %.2f\n", user.name, user.balance);
    printf("\nPress Enter to continue...");
    clear_input_buffer();
    getchar();
}

void deposit()
{
    float amount;
    system("cls");
    printf("\n\n\t=== DEPOSIT ===\n");
    printf("Current balance: %.2f\n", user.balance);
    printf("Enter amount to deposit: ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        printf("Invalid amount.\n");
        Sleep(1200);
        clear_input_buffer();
        return;
    }
    user.balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, user.balance);
    Sleep(1500);
    clear_input_buffer();
}

void withdraw()
{
    float amount;
    system("cls");
    printf("\n\n\t=== WITHDRAW ===\n");
    printf("Current balance: %.2f\n", user.balance);
    printf("Enter amount to withdraw: ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        printf("Invalid amount.\n");
        Sleep(1200);
        clear_input_buffer();
        return;
    }
    if (amount > user.balance) {
        printf("Insufficient balance.\n");
        Sleep(1200);
        clear_input_buffer();
        return;
    }
    user.balance -= amount;
    printf("Withdrawn %.2f. New balance: %.2f\n", amount, user.balance);
    Sleep(1500);
    clear_input_buffer();
}

void home_page()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n\t\t\t=== BANKING SYSTEM ===\n");
        printf("\n\t1. Check Balance");
        printf("\n\t2. Deposit");
        printf("\n\t3. Withdraw");
        printf("\n\t4. Logout");
        printf("\n\nEnter your choice (1-4): ");
        if (scanf("%d", &choice) != 1) {
            clear_input_buffer();
            continue;
        }
        clear_input_buffer();
        switch (choice) {
            case 1: check_balance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: return; // go back to main menu (logout)
            default: printf("Invalid choice.\n"); Sleep(900);
        }
    }
}
