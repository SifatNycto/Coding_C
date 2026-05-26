// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *list = malloc(3 * sizeof(int));
//     if (list == NULL)
//     {
//         return 1;
//     }

//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;

//     int *tmp = malloc(4 * sizeof(int));
//     if (tmp == NULL)
//     {
//         free(list);
//         return 1;
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         tmp[i] = list[i];
//     }
//     tmp[3] = 4;

//     free(list);
//     list = tmp;

//     for (int i = 0; i < 4; i++)
//     {
//         printf("%i\n", list[i]);
//     }

//     free(list);

//     return 0;
// }








/*
      *
    *   *   
  *   *   *
*   *   *   *

  *   *   *
    *   *
      *
*/




#include <stdio.h>

int main()
{


    // upper part
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4 - i; j++)
            printf("  ");

        for(int j = 1; j <= i; j++)
            printf("*   ");

        printf("\n");
    }

    // lower part
    for(int i = 3; i >= 1; i--)
    {
        for(int j = 1; j <= 4 - i; j++)
            printf("  ");

        for(int j = 1; j <= i; j++)
            printf("*   ");

        printf("\n");
    }

    return 0;
}