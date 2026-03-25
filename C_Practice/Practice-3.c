#include <stdio.h>


//========================1
/*
12345
1234
123
12
1
*/

// int main(void)
// {
//     int n = 5; //line number
//     for(int i = n; i >= 1; i--) //outer loop condition
//     {
//         for(int j = 1; j <= i; j++) // proti line e i porjonto digit print korar jonno
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }











//========================2
/*
1234567
 23456
  345
   4          aie out put ta pete 1st line er last digit er moto n=7 dhorte hobe

1234 567
 234 56
  34 5
   4        bujhar jonno bhenge dekhaisi
*/

// int main(void)
// {
//     int n = 7;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (i-1); j++)  //space print korar jonno
//         {
//             printf(" ");
//         }
//         for (int k = i; k <= (n-(i-1)); k++)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
// }





//========================3
/*
    1
   22
  333
 4444
55555
*/

// int main(void)
// {
//     int n = 5;  // line number er jonno
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = n; j >= i; j--) // space print korar jonno
//         {
//             printf(" ");
//         }
//         for(int k = 1; k <= i; k++)  //ekhane k na likhe j likhleo hobe
//         {                        //karon jekono akta variable er kaj oi specific loop ei thake
//             printf("%d", i); // proti line e just i er value gulai print korar jonno
//         }
//         printf("\n");
//     }
// }

        // for(int j = 1; j <= n-i; j++)
        // {
        //     printf(" ");
        // }







//========================4
/*  1
   212
  32123
 4321234
543212345                n=5 nile aie output ashbe 5 lines er
    1
   21 2
  321 23
 4321 234
54321 2345           bujhar shubidhar jonno evabe bhenge dekhacchi             */
// int main(void)
// {
//     int n = 5;    // line number
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n-i); j++) // space gula print korar jonno
//         {
//             printf(" ");
//         }
//         for(int j = i; j >= 1; j--)  //left side er part ta (1 21 321) print korar jonno
//         {
//             printf("%d", j);
//         }
//         for(int j = 2; j <= i; j++)  //right side er part ta (2 23 234) print korar jonno
//         {
//             printf("%d", j);
//         }
//         printf("\n");        
//     }
// }







//========================5
/*
1
01
101
0101
10101
*/
// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         int start;  // even line 0 diye start hobe, ar odd line gula 1 diye start hobe
//         if (i % 2 != 0)   //line odd houwar condition
//         {
//             start = 1;
//         }
//         else               //even houwar condition
//         {
//             start = 0;
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", start);
//             start = 1 - start;    // 1 ar 0 ek ek kore ulte deowar jonno
//         }                           // jodi 1 hoy porer line er jonno hobe 1-1 = 0 
//         printf("\n");                   // jodi 0 hoy porer line er jonno hobe 1-0 = 1 
//     }
// }







//========================5.2
/*

1
01
101
0101
10101

*/

// int main(void)
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int start = i % 2;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", start);
//             start = 1 - start;
//         }
//         printf("\n");
//     }
// }







//========================6
/*

1
2 3
4 5 6
7 8 9 10

*/

// int main(void)
// {
//     int n = 4;  // line number
//     int num = 1;  //vitorer number digit gula count korbe 1 thekek 
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", num);   // digit gula faka faka rakhar jonno %d er pore ekta space
//             num++;          // number gula ke ek ek kore bariye deowar jonno num++ 
//         }
//         printf("\n");
//     }
// }







//========================7
/*
1234321
 12321
  121
   1              // aie pattern er jonno n=5 dhorte hobe

1234 321   ---> bujar shubidhar jonno evabe bhenge likhsi
 123 21
  12 1
   1
*/
// int main(void)
// {
//     int n = 4;
//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 1; j <= (n-i); j++) //space gula print korar jonno
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++) //left side er part ta (1234) print korar jonno
//         {
//             printf("%d", j);
//         }
//         for (int j = (i-1); j >= 1; j--) //right side er part ta (321) print korar jonno
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }





//========================8

/*

5
54
543
5432
54321

*/

// int main(void)
// {
//     int n = 5;  //line number er jonno
//     for (int i = n; i >= 1; i--)            // input kora 5 theke 1 porjonto kombe
//     {
//         for (int j = n; j >= i; j--) //proti line e n theke i porjonto digit
//         {                                                       //gula print korar jonno
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }






//========================9
/*

1223344556
 22334455
  233445
   3344
    34

122334 4556
 22334 455
  2334 45
   334 4
    34

*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx   not correct!!! eta hoy nai akhono !!!!!!
// int main(void)
// {
//     int n;
//     printf("Enter line number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j <= n; j++)
//         {
//             printf("%d%d", j, j+1);
//         }
//         printf("\n");
//     }
// }







//========================10
/*

12345
 2345
  345
   45
    5

*/

// int main(void)
// {
//     int n = 5; // line number
//     for (int i = 1; i <= n; i++)  // system ta 1 theke input kora 5 potjonto jabe
//     {
//         for (int j = (n-i); j <= n; j++)  //proti line er 1st e space print korar jonno
//         {
//             printf(" ");
//         }
//         for (int k = i; k <= n; k++) // digit gula print korbe
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
// }









//========================11
/*

 1          --------------> line 1
213         --------------> line 2
314         --------------> line 3
 1          --------------> line 4

 */

// int main(void)
// {
//     int n = 4;            //----------------> 4 ta line er jonno
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1 || i == 4) //-----> jodi 1st or 4th line hoy tokhon (space + 1 + space) print hobe
//         {
//             printf(" 1 ");
//         }

//         else if (i == 2 || i == 3)  //----> jodi 2nd or 3rd line hoy tokhon i, 1, i+1 print hobe
//                                         // 2nd line e i er value 2 hobe karon 1st line er pore i++ hoise
//                                         // 3rd line e i er value 3 hobe karon 2nd line er pore i++ hoise
//         {
//             printf("%d%d%d", i, 1, i+1);
//         }
//         printf("\n");
//     }
// }









//========================11.2
/*
 1
213
314
 1
*/

// int main(void)
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         if (i == 1 || i == 4)
//         {
//             printf(" 1 ");
//         }
//         else if (i == 2)
//         {
//             printf("213");
//         }
//         else if (i == 3)
//         {
//             printf("314");
//         }
//         printf("\n");    
//     }
// }







//========================11.3
/*
 1
213
314
 1
*/

// int main(void)
// {
//     int lines[4] = {1, 213, 314, 1};
//     for (int i = 0; i < 4; i++)
//     {
//         if (i == 0 || i == 3)
//         {
//             printf(" %d ", lines[i]);
//         }
//         else
//         {
//             printf("%d", lines[i]);
//         }
//         printf("\n");
//     }
// }







//========================12
/*
    *
   ***
  *****                    // eta number pyramid mane 4th question er mototi
 *******                    // just (%d, j) er jaegae just("*") star diley hobe
*********           *
                   ** *
                  *** **
                 **** ***
                ***** ****     bujhar jonno number er pyramid er moto kore likhsi arki         */
// int main(void)
// {
//     int n = 5;  // ekhane n hocche line number
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = (n-i); j >= 1; j--)  //space er jonno
//         {
//             printf(" ");
//         }
//         for (int j = i; j >= 1; j--)  // left side er jonno
//         {
//             printf("*");
//         }
//         for (int j = 2; j <= i; j++)  // right side er jonno
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }










//========================12.2
/*
    *
   ***
  *****                  star Pyramid evabeo kora jae
 *******
*********
*/
// int main(void)
// {
//     int lines;
//     printf("\nEnter number of lines: ");
//     scanf("%d", &lines);                       //line number input neowar jonno
//     int star = 1, space = lines - 1;

//     for (int i = 1; i <= lines; i++)
//     {
//         for (int j = 1; j <= space; j++)  // space print korar jonno
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= star; k++) // star print korar jonno
//         {
//             printf("*");
//         }
//         space--;        // proti line e space (line-1) theke ek ek kore kombe
//         star += 2;      // 1 er pore 3, 3 er pore 5, odd number er moto star print er jonno
//         printf("\n");                             //star er value 1 er sathe 2 kore add kora hocche
//     }
// }







//========================13
/*
*                         *                     1
**      breaking          **                    12
***     that pattern      ***     like--->      123
****    ------>           ****                  1234
*****                     *****                 12345
****          
***                       ****                  1234
**                        ***                   123
*                         **                    12
                          *                     1               */
int main(void)
{                                       // best will be for user input ---->
    int n = 5;                          // int n;
    for (int i = 1; i <= n; i++)        //printf("\nEnter number for middle row to expand: ");
    {                                   //scanf("%d", &n);
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = (n-1); i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}



