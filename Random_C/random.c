#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


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



// int main()
// {


//     // upper part
//     for(int i = 1; i <= 4; i++)
//     {
//         for(int j = 1; j <= 4 - i; j++)
//             printf("  ");

//         for(int j = 1; j <= i; j++)
//             printf("*   ");

//         printf("\n");
//     }

//     // lower part
//     for(int i = 3; i >= 1; i--)
//     {
//         for(int j = 1; j <= 4 - i; j++)
//             printf("  ");

//         for(int j = 1; j <= i; j++)
//             printf("*   ");

//         printf("\n");
//     }

//     return 0;
// }









// int main()
// {
//   int n;

//   while(n % 2 != 0)
//   {
//     scanf("%d", &n);
//   }

//   return 0;
// }



// int main()
// {
//   int n;

//   for(;;)
//   {
//     scanf("%d", &n);
//     if (n % 2 == 0)
//       break;
//   }

//   return 0;
// }





// #include <stdio.h>

// int main()
// {
//   int num;

//   printf("Enter an even number: ");
//   scanf("%d", &num);

//   while (num % 2 != 0)
//   {
//     printf("Wrong input! \nEnter an even number: ");
//     scanf("%d", &num);
//   }

//   printf("Correct! You entered an even number.");

//   return 0;
// }



// #include <string.h>
// int main()
// {
//   int n;

//   printf("\nhow many names you wanna enter: ");
//   scanf("%i", &n);


//   char s[n][100];

//   printf("enter your inputs: ");
//   for (int i = 0; i < n; i++)
//   {
//     scanf(" %s", s[i]);
//   }

//   printf("\nyour entered inputs");
//   for(int i = 0; i < n; i++)
//   {
//     printf("\n%s", s[i]);
    
//   }

//   return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   int n;
//   scanf("%d", &n);

//   char word[n][100];

//   for(int i = 0; i < n; i++)
//   {
//     scanf(" %s", word[i]);
//     int length = strlen(word[i]);

//     char first_char = word[i][0];
//     char last_char = word[i][length - 1];

//     if (length > 10)
//     {
//       printf("%c%d%c", first_char, (length - 2), last_char);
//     }

//     else 
//     {
//       printf("%s", word[i]);
//     }

//   }

//   return 0;
// }





// #include <string.h>

// int main()
// {
//   int n;
//   scanf("%d", &n);

//   char word[n][100];

//   for(int i = 0; i < n; i++)
//   {
//     scanf(" %s", word[i]);
//   }

//   for (int i = 0; i < n; i++)
//   {
//     int length = strlen(word[i]);

//     char first_char = word[i][0];
//     char last_char = word[i][length - 1];

//     if (length > 10)
//     {
//       printf("\n%c%d%c", first_char, (length - 2), last_char);
//     }

//     else 
//     {
//       printf("\n%s", word[i]);
//     }
//   }


//   return 0;
// }














// int main()
// {
  
//   char s1[69] = "";
//   char s2[65] = "";

//   printf("\nenter a string: ");
//   scanf(" %s", s1);

//   int length = strlen(s1);

//   for (int i = 0; i < length; i++)
//   {
//     s2[i] = tolower(s1[i]);
//   }

//   // printf("%s", s2);

//   for (int i = 0; i < length; i++)
//   {
//     printf("%c", s2[i]);
//   }

//   return 0;
// }







int main()
{
  char word1[500] = "";
  char word2[500] = "";

  printf("\nEnter any word: ");
  scanf(" %s", word1);

  int length = strlen(word1);

  if (islower(word1[0]))
  {
    for (int i = 0; i < length; i++)
    {
      word2[i] = tolower(word1[i]);
    }
  }
  else
  {
    for (int i = 0; i < length; i++)
    {
      word2[i] = toupper(word1[i]);
    }
  }

  printf("%s", word2);

  return 0;
}