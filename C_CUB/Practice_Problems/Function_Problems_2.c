#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//FUNCTIONS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//1. Fibonacci Series >>>>>>>>>>>>>>>>>>>>>>>>
// int Fib(int n)
// {
//     int a = 0, b = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         int c = a + b;
//         a = b;
//         b = c;
//     }
// }

// int main()
// {
//     int n;
//     printf("\nEnter value for n: ");
//     scanf("%d", &n);

//     Fib(n);
//     return 0;
// }





//2. Factorial of a number >>>>>>>>>>>>>>>>>>>>>>>>
// int Fact(int n)
// {
//    
//     int factorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {
//     int n;
//     printf("\nEnter value for n to find the factorial: ");
//     scanf("%d", &n);
//     printf("\nThe factorial of %d is: %d", n, Fact(n));
//     return 0;
// }








//3. Prime number series upto nth terms >>>>>>>>>>>>>>>>>>>>>>>>
// int Prime(int num);

// int main()
// {
//     int num;
//     printf("\nEnter a number to find prime numbers upto nth terms: ");
//     scanf("%d", &num);
//     if (num < 2)
//     {
//         printf("\nInvalid!");
//         return 0;
//     }
//     Prime(num);

//     return 0;
// }

// int Prime(int num)
// {
//     printf("\nPrime numbers are: ");
//     for (int n = 2; n <= num; n++)
//     {
//         int isPrime = 1;
//         int limit = sqrt(n);
//         for (int i = 2; i <= limit; i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }

//         if (isPrime) printf("%d ", n);
//     }
//     printf("\n");
// }








//4. Prime number checking >>>>>>>>>>>>>>>>>>>>>>>>
// int Prime(int num);


// int main()
// {
//     int num;
//     printf("\nEnter a number to find prime numbers upto nth terms: ");
//     scanf("%d", &num);
//     if (num < 2)
//     {
//         printf("\nInvalid!");
//         return 0;
//     }
//     Prime(num);

//     return 0;
// }

// int Prime(int num)
// {
//     int isPrime = 1;
//     int limit = sqrt(num);
//     for (int i = 2; i <= limit; i++)
//     {
//         if (num % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime)
//     {
//         printf("\nthe number %d is a prime number:", num);
//     }
//     else
//     {
//         printf("\nthe number %d is not a prime number", num);
//     }
// }







//5. Swap two numbers >>>>>>>>>>>>>>>>>>>>>>>>

// int Swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int a, b;
//     printf("\nEnter value for a: ");
//     scanf("%d", &a);
//     printf("\nEnter value for b: ");
//     scanf("%d", &b);

//     printf("\nBefore Swap:\na = %d\nb = %d", a, b);

//     Swap(&a, &b);

//     printf("\nAfter Swap:\na = %d\nb = %d", a, b);
//     return 0;
// }





//6. Reverse the number >>>>>>>>>>>>>>>>>>>>>>>>

// int rev(int num)
// {
//     int reversed = 0;
//     while (num != 0)
//     {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     return reversed;
// }

// int main()
// {
//     int num;
//     printf("\nEnter any integer number: ");
//     scanf("%d", &num);
    
//     printf("\nThe reversed number is: %d", rev(num));
//     return 0;
// }






//7. Finding Max Min number >>>>>>>>>>>>>>>>>>>>>>>>

// int max(int a, int b)
// {
//     if (a > b) return a;
//     else return b;
// }

// int min(int a, int b)
// {
//     if (b < a) return b;
//     else return a;
// }

// int main()
// {
//     int a, b;
//     printf("\nEnter value for a: ");
//     scanf("%d", &a);
//     printf("\nEnter value for b: ");
//     scanf("%d", &b);

//     printf("\nMaximum number is: %d", max(a, b));
//     printf("\nMinimum number is: %d", min(a, b));
//     return 0;
// }