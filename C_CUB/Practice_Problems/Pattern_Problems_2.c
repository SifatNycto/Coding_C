#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

// 54321
//  4321
//   321
//    21
//     1
// int main(void)
// {
//     int n = 5;
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= (n-i); j++)
//             printf(" ");
//         for (int j = i; j >= 1; j--)
//             printf("%d", j);
//         printf("\n");
//     }
// }




//     1
//    21
//   321
//  4321
// 54321
// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = (n-i); j >= 1; j--)
//             printf(" ");
//         for (int j = i; j >= 1; j--)
//             printf("%d", j);
//         printf("\n");
//     }
// }











// 12345
//  1234
//   123
//    12
//     1
// 3. >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 3
// int main(void)
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= (5-i); j++)
//             printf(" ");
//         for (int j = 1; j <= i; j++)
//             printf("%d", j);
//         printf("\n");
//     }
// }









//2. >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 2
//     +
//    +++
//   +++++
//  +++++++
// +++++++++
//  +++++++
//   +++++
//    +++
//     +

//     1
//    212
//   32123
//  4321234
// 543212345
//  4321234
//   32123
//    212
//     1



//Diamond Shape >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = (n-i); j >= 1; j--)
//             printf(" ");

//         for (int j = i; j >= 1; j--)
//             printf(".");

//         for (int j = 2; j <= i; j++)
//             printf(".");
//         printf("\n");
//     }
//     for (int i = (n-1); i >= 1; i--)
//     {
//         printf(" ");
//         for (int j = 1; j <= ((n-1)-i); j++)
//             printf(" ");
            
//         for (int j = i; j >= 1; j--)
//             printf(".");

//         for (int j = 2; j <= i; j++)
//             printf(".");
//         printf("\n");
//     }
// }





// diamond shape creation using time animation >>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main(void)
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = (n-i); j >= 1; j--)
//             printf(" ");

//         for (int j = i; j >= 1; j--)
//             sleep(1), printf("%d", j);

//         for (int j = 2; j <= i; j++)
//             sleep(1), printf("%d", j);
//         printf("\n");
//     }
//     for (int i = (n-1); i >= 1; i--)
//     {
//         printf(" ");
//         for (int j = 1; j <= ((n-1)-i); j++)
//             printf(" ");
            
//         for (int j = i; j >= 1; j--)
//             sleep(1), printf("%d", j);

//         for (int j = 2; j <= i; j++)
//             sleep(1), printf("%d", j);
//         printf("\n");
//     }
// }














//Pattern_1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 31524
//   5
//   5
// int main(void)
// {
//     int line[] = {31524, 5};

//     for (int i = 0; i <= 2; i++)
//     {
//         if (i == 0) printf("%d", line[i]);

//         for (int j = 1; j <= 2; j++)
//         {
//             if (i == 1) printf("  %d\n", line[i]);
//         }
//         printf("\n");
//     }
// }












// Que1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 3 1 5 2 4
//     5
//     5

// int main() {
//     int num[]={3,1,5,2,4};  //First Line
//     int lines=3;  //Number of lines
//     for(int i=1;i<=lines;i++) {
//         for(int j=0; j<5;j++) {  //Loop for Rows
//             if (i==1) { //Only first line will print all the numbers
//                 printf("%d",num[j]);
//             } else {
//                 if (j<2 || j>2){  //Except num[2] position in the num[] array, it will print a " " space
//                     printf(" ");
//                 } else {  //Comes to else statement when num[2] and prints num[2]=5
//                     printf("%d",num[j]);
                    
//                 }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }






// 4. >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 4
// 345566
//  45565
//  45564
//  45563

// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         if (i > 0) printf(" ");

//         if(i == 0) printf("345566");

//         else printf("4556%d", 6-i);

//         printf("\n");
//     }
// }













// Que---------------------4

// int main() {
//     int lines=4;
//     int column=4;
//     int last_value=6;  //This the last digit

//     for(int i=1; i<=lines;i++) { //lines number of lines
//         int num=3;               //Putting this variable here will recreate this variable every time the line loops to next line or i++ happens
//         for(int j=1;j<=column;j++){  //column are the number of digits in a row or line will have, 3456 for this it's 4 cuz 4 digits
//             if(i>1 && j==1) {  //prints a space at j=1 from 2nd line (i=2)
//                 printf(" ");
//             } else if(i==1 && j<=2) {  //if line 1(i=1) and j<=2 prints 1 time, "34"
//                 printf("%d",num);
//             } else if(j<=2 || j==column) {  // then in i=2 2nd line until j<=2 prints once, 4 is only printed since j=1 will print a " " space
//                 printf("%d",num);          //or last value j=column(j=4) has 6 which will also be printed once                    
//             } else {
//                 printf("%d%d",num,num);  // if not j=1 or j=2 it will print the num twice, here "5" is being printed twice
//             }
//             num++;                 //This is just increments 3456 like this, it increases 4times since colmun=4
//         }
//         printf("%d",last_value);
//         last_value--;  //Last value decrements
//         printf("\n");
//     }
//     return 0;
// }









//[10/17, 6:24 PM] Sumiya Akter Mukta:
// 31524
//   5
//   5



int main() {
    int arr[] = {3, 1, 5, 2, 4};
    int i;

    // First line
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    // Next two lines
    for (i = 0; i < 2; i++) {
        printf("  5\n");
    }

    return 0;
}




//[10/17, 6:24 PM] Sumiya Akter Mukta:
// 345566
//  45565
//  45564
//  45563

// #include <stdio.h>
// int main() {
//     int i;

//     for (i = 0; i < 4; i++) 
//     {
//         // spaces
//         if (i > 0)
//         {
//             printf(" ");
//         }
//         // print the line
//         if (i == 0)
//         {
//             printf("345566");
//         }
//         else
//         {
//             printf("4556%d", 6 - i);
//         }
//         printf("\n");
//     }

//     return 0;
// }