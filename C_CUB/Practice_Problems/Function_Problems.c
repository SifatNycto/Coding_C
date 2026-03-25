#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//  formula     ((x + (y-z) - p) / q)

// int part_1(int y, int z)
// {
//     return (y-z);
// }
// float part_2(float x, float part_1, float p)
// {
//     return (x + part_1 - p);
// }
// float part_3(float part_2, float q)
// {
//     return (part_2 / q);
// }

// int main()
// {
//     float x, y, z, p, q;
//     printf("\nEnter values of x, y, z, p, q serially: ");
//     scanf("%f%f%f%f%f", &x, &y, &z, &p, &q);

//     printf("\nFinal result is: %f", part_3(part_2(x, part_1(y, z), p), q));

//     return 0;
// }





//============================or

// float equation(float x, float y, float z, float p, float q)
// {
//     return ((x + (y-z) - p) / q);
// }

// int main()
// {
//     float x, y, z, p, q;
//     printf("\nEnter values of x, y, z, p, q serially: ");
//     scanf("%f%f%f%f%f", &x, &y, &z, &p, &q);

//     printf("\nFinal result is: %f", equation(x, y, z, p, q));

//     return 0;
// }


//===================================
//Finding Maximum Value From Array
// int main (void)
// {
//     int a[] = {3, 48, 8, 25, 1};
//     int n = sizeof(a) / sizeof(a[0]);
//     int max = a[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("Maximum value is: %d", max);
// }









//=========================================
//Fibonacci Series 

int Fib(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    Fib(n);
    return 0;
}










//================================================
//SWAP TWO NUMBERS >>>>>>>>>>>>>>>>>

