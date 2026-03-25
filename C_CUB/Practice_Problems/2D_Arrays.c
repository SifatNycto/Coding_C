#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>



int main(void)
{
    int numbers [3][3];

    // int rows = sizeof(numbers) / sizeof(numbers[0]);
    // int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // printf("\nrows: %d", rows);
    // printf("\ncolumns: %d", columns);
    // printf("\n");

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}


// int main(void)
// {
//     int numbers[3][5];

// }