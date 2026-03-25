#include <stdio.h>
#include <math.h>
int main(void)
{
    printf(">>><<< Mini Calculator >>><<<");
    int opt;
    char name[250];
    printf("\n\nEnter your name: ");
    scanf("%s", name);

    printf("\nThere Is Two Things You Can Do --> ");
    printf("\nOption_1 (for -> sqrt, pow): ");
    printf("\nOption_2 (for -> +, -, x, /): ");
    printf("\n%s, Choose Your Option: ", name);
    scanf("%d", &opt);

    if (opt == 1)
    { 
        char ch;
        printf("\nWhat You Wanna Do Now? ");
        printf("\na. Square root\nb. Power");

        printf("\n%s, Choose 'a' or 'b' here: ", name);
        scanf(" %c", &ch);
        
        if (ch == 'a')
        {
            int n;
            printf("\nEnter A Number To Perform Task: ");
            scanf("%d", &n);
            printf("\nThe sqrt of %d is: %.0lf", n, sqrt(n));
        }
        else if (ch == 'b')
        {
            int x, a;
            printf("\nEnter The Base: ");
            scanf("%d", &x);
            printf("\nEnter The Power: ");
            scanf("%d", &a);
            printf("\nThe Power of %d is: %.0lf", x, pow(x, a));
        }
        else
        {
            printf("\nInvalid Choise!");
        }
                
    }
    
    else if (opt == 2)
    {
       int n1, n2;
       printf("\nEnter number-1: ");
       scanf("%d", &n1);

       printf("\nEnter number-2: ");
       scanf("%d", &n2);

       printf("\nWhat you wanna do?");
       printf("\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
       
       int choise;
       printf("\nChoose (1-4)-> ");
       scanf("%d", &choise);

       if (choise == 1)
       {
           printf("\n%d + %d = %d", n1, n2, n1 + n2);
       }
       else if (choise == 2)
       {
           printf("\n%d - %d = %d", n1, n2, n1 - n2);
       }
       else if (choise == 3)
       {
           printf("\n%d x %d = %d", n1, n2, n1 * n2);
       }
       else if (choise == 4)
       {
           printf("\n%d ÷ %d = %d", n1, n2, n1 / n2);
       }
       else
       {
           printf("\nInvalid Input!\nEnter Valid Data (1/2/3/4) ->");
       }
    }
    else
    {
        printf("\nOpps...\nInvalid Option Choise!!!");
    }
    printf("\nThank You %s For Using The Calculator.", name);
}