#include <stdio.h>
#include <math.h>
#include <string.h>



//>>>>>>>>>>FUNCTION<<<<<<<<<<//

// void australia()
// {
//     printf("\nYou are in Australia");
//     return;
// }
// void england()
// {
//     printf("\nYou are in England");
//     australia();
//     return;
// }

// void india()
// {
//     printf("\nYou are in India");
//     england();
//     return;
// }
// int main()
// {
//     india();
//     return 0;
// }

//===========================================================

// int add(int a, int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a, b;
//     printf("\nEnter a: ");
//     scanf("%d", &a);
//     printf("Enter b: ");
//     scanf("%d", &b);
//     int sum = add(a,b);
//     printf("sum is: %d", sum);
//     return 0;
// }

//===========================================================
// nCr ----------->

// int main(void)
// {
//     int n;
//     printf("enter num: ");
//     scanf("%d", &n);
//     int r;
//     printf("enter r: ");
//     scanf("%d", &r);
//     int nfact = 1;
//     int rfact = 1;
//     int nrfact = 1;

//     for (int i = 2; i <= n; i++)
//         nfact *= i;
    
//     for (int i = 2; i <= r; i++)
//         rfact *= i;

//     for (int i = 2; i <= n-r; i++)
//         nrfact *= i;

//     int ncr = nfact / (rfact * nrfact);
//     printf("ncr is : %d", ncr);
//     return 0;
// }

//like this------------>

/*                n!
   ncr = ---------------
            r! (n-r)!                   */
//finding ncr
// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 2; i <= x; i++)
//         fact *= i;
    
//     return fact;
// }
// int combination(int n, int r)
// {
//     int ncr = factorial(n) / (factorial(r) * factorial(n-r));
//     return ncr;
// }
// int main()
// {
//     int n;
//     printf("enter num: ");
//     scanf("%d", &n);
//     int r;
//     printf("enter r: ");
//     scanf("%d", &r);
//     int ncr = combination(n, r);
//     {
//         printf("ncr is : %d", ncr);
//     }
//     return 0;
// }




int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf(" %d", icj);
        }
        printf("\n");
    }
    return 0;
}