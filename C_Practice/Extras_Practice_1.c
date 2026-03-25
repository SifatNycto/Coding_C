#include <stdio.h>
#include <math.h>
#include <string.h>

// int main(){
  
//    char string1[] = "Bro";
//    char string2[] = "Code";
 
//     //strlwr(string1);                             // converts a string to lowercase
//     //strupr(string1);                              // converts a string to uppercase
//    //strcat(string1, string2);                     // appends string2 to end of string1
//    //strncat(string1, string2, 1);                 // appends n characters from string2 to string1
//    //strcpy(string1, string2);                     // copy string2 to string1
//    // strncpy(string1, string2, 2);                 // copy n characters of string2 to string1
   
//    //strset(string1, '?');                         //sets all characters of a string to a given character
//    //strnset(string1, 'x', 1);                     //sets first n characters of a string to a given character
//    //strrev(string1);                              //reverses a string

//    //int result = strlen(string1);                 // returns string length as int
//    // int result = strcmp(string1, strrev(string1));        // string compare all characters
//    //int result = strncmp(string1, string2, 1);    // string compare n characters
//    //int result = strcmpi(string1, string1);       // string compare all (ignore case)
//    //int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

//     printf("%s", string1);

//    /*
//    if(result == 0)
//    {
//       printf("These strings are the same");
//    }
//    else
//    {
//       printf("These strings are not the same");
//    }*/
   

//    return 0;
// }





// Code For Pyramid
// int main(void)
// {
//     int lines;
//     printf("Enter number of lines for pyramid: ");
//     scanf("%d", &lines);

//     printf("Here:\n");

//     int star=1, space=lines-1;

//     for (int i=0; i<lines; i++)
//     {
//         for (int j=0; j<space; j++)
//         {
//             printf(" ");
//         }

//         for (int k=0; k<star; k++)
//         {
//             printf("*");
//         }
//         star+=2;
//         space--;
//         printf("\n");
//     }
// }















// // // // 1. Code For Counting Length From A String
// // // #include <stdio.h>
// // // #include <string.h>
// // // int main(void) {
// // //     char string[300];
// // //     int count = 0;
// // //     printf("Enter a string: ");
// // //     fgets(string, sizeof(string), stdin);
// // //     // count = strlen(string);   // Adjust for the newline character if present
    
// // //     if (count > 0 && string[count - 1] == '\n') {
// // //         count--;
// // //     }
// // //     printf("Length of the string is: %d\n", count);
// // //     return 0;
// // // }



// // // // 9 - 13
// // // // 1.1 Code For Counting Length From A String
// // // #include <stdio.h>
// // // #include <string.h>
// // // #include <stdlib.h>
// // // int main(void)
// // // {
// // //     char stri[500];

// // //     size_t count = 0; // Variable to hold the length of the string

// // //     printf("Enter a string: ");

// // //     fgets(stri, sizeof(stri), stdin); // Use fgets to read the string, allowing spaces

// // //     count = strcspn(stri, "\n"); // Find the length of the string until the newline character
// // //     // If the string is not empty, replace the newline character with a null terminator

// // //     stri[count] = '\0'; // Null-terminate the string to remove the newline character

// // //     printf("Length of %s is: \"%zu\"", stri, count);
    
// // // }







// // // // Code For Counting Length Of A String 2222222
// // // #include <stdio.h>
// // // int main(void) {
// // //     char str[250];
// // //     int count = 0;

// // //     printf("Enter a string: ");
// // //     fgets(str, sizeof(str), stdin); // Use fgets to read the string

// // //     // Count characters until the null terminator
// // //     while (str[count] != '\0') {
// // //         count++;
// // //     }

// // //     // Adjust for the newline character if present
// // //     if (count > 0 && str[count - 1] == '\n') {
// // //         count--;
// // //     }

// // //     printf("Length of the string is: %d\n", count);
// // //     return 0;
// // // }



// // // // reverse srting  ....

// // // #include <stdio.h>
// // // #include <string.h>

// // // int main() {
// // //     char str[250];

// // //     printf("Enter a string: ");
// // //     fgets(str, sizeof(str), stdin);

// // //     // Remove newline
// // //     str[strcspn(str, "\n")] = '\0';

// // //     // Reverse print
// // //     for (int i = strlen(str) - 1; i >= 0; i--) {
// // //         printf("%c", str[i]);
// // //     }

// // //     return 0;
// // // }




// // // // reverse string

// // // #include <stdio.h>
// // // #include <string.h>

// // // int main(void)
// // // {
// // //     // 1. Declare a character array (a string) to hold the user's input.
// // //     // We make it large enough for a typical sentence.
// // //     char str[250];

// // //     // 2. Prompt the user for input.
// // //     printf("Enter a string to reverse: ");

// // //     // 3. Read the string from the user.
// // //     // fgets is a safe function to read a line of text. It stops when it fills
// // //     // the buffer, reaches a newline, or hits the end of the file.
// // //     fgets(str, sizeof(str), stdin);

// // //     // 4. Remove the newline character from the end of the string.
// // //     // fgets stores the Enter key press as a '\n' character. We must remove it
// // //     // to have a clean string. This line finds the first '\n' and replaces it
// // //     // with a null terminator '\0', which marks the end of a string in C.
// // //     str[strcspn(str, "\n")] = '\0';

// // //     printf("Original string: \"%s\"\n", str);

// // //     // 5. Set up for the reversal.
// // //     int left = 0;                // An index starting at the beginning of the string.
// // //     int right = strlen(str) - 1; // An index starting at the end of the string.
// // //     char temp;                   // A temporary variable to help us swap characters.

// // //     // 6. Loop until the 'left' and 'right' indices meet in the middle.
// // //     while (left < right) {
// // //         // a. Store the character from the left side.
// // //         temp = str[left];
// // //         // b. Copy the character from the right side to the left side.
// // //         str[left] = str[right];
// // //         // c. Copy the stored character to the right side.
// // //         str[right] = temp;

// // /  {
//          printf("Entered character is Consonant.");
//       }
//       else
//       {
//          printf("Entered character is not a vowel or consonant.");
//       }
// }


// d. Move the indices one step closer to the center.
// // //         left++;
// // //         right--;
// // //     }

// // //     // 7. Print the final, reversed string.
// // //     printf("Reversed string: \"%s\"\n", str);

// // //     return 0;
// // // }






//====================================1

// //Function Prototype or Declaration || tells the compiler our function exists, what to do
// void printHello();
// void printGoodbye();


// //Function Call || use the work, || can be called by main or another function 
// int main()
// {
//     printHello(); //calling statements
//     printHello();
//     printHello();
//     return 0;
// }


// //Function Definition || do the work || //void is return type that returns nothing
// void printHello()
                    
// {
//     printf("hello world\n");
//     printf("My name is Sifat.\n");
// }





//====================================2

// //Function Prototype or Declaration || tells the compiler our function exists, what to do
// void printHello();
// void printGoodbye();


// //Function Call || use the work, || can be called by main or another function 
// int main()
// {
//     printHello(); //calling statements
//     printGoodbye();
//     printHello();
//     return 0;
// }


// //Function Definition || do the work || //void is return type that returns nothing
// void printHello()
                    
// {
//     printf("Hello\n");
// }

// void printGoodbye()
// {
//     printf("Good bye\n");
// }


//====================================3

// void greet(char c);
// int main()
// {
//     char c;
//     printf("if you are bangladeshi enter b ");
//     printf("\nif you are spanish enter s ");
//     printf("\nenter your option (b or s): ");
//     scanf("%c", &c);
//     greet(c);
//     return 0;
// }
// void greet(char c)
// {
//     if (c == 'b')
//     {
//         printf("Assalamualaukum\n");
//     }
//     else if (c == 's')
//     {
//         printf("Hola there\n");
//     }
//     else
//     {
//         printf("invalid character");
//     }
// }



//====================================3.2

// void salam();
// void hola();

// int main()
// {
//     char c;
//     printf("if you are bangladeshi enter b ");
//     printf("\nif you are spanish enter s ");
//     printf("\nenter your option (b or s): ");
//     scanf("%c", &c);
//     if (c == 'b')
//     {
//         salam();
//     }
//     else if (c == 's')
//     {
//         hola();
//     }
//     return 0;
// }

// void salam()
// {
//     printf("Assalamualaikum there.");
// }

// void hola()
// {
//     printf("Hola amigo.");
// }



//====================================4
//Function for Summation

// int sum(int a, int b); //int sum(parameters)

// int main()
// {
//     int a, b;
//     printf("enter number-1: ");
//     scanf("%d", &a);
//     printf("enter number-2: ");
//     scanf("%d", &b);
    
//     //int s = sum(a, b); //printf("sum is: %d", s);
//     printf("sum is: %d", sum(a, b));
//     return 0;
// }

// int sum(int x, int y)
// {
//     return x + y;
// }


//====================================5
//Function for table

// void table(int n);

// int main()
// {
//     int n;
//     printf("enter a number for table: ");
//     scanf("%d", &n);
//     table(n); // here n is argument, actual parameter
//     return 0;
// }

// void table(int n) // here n is parameter, formal parameter
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("\n%d", i*n);
//     }
    
// }


//or=========================0r e.g. price
// void calculatePrice(float vlue);

// int main()
// {
//     float value = 100.0;
//     calculatePrice(value);
//     return 0;
// }

// void calculatePrice(float value)
// {
//     value += (0.18 * value);
//     printf("\nFinal price: %f", value);
// }



//====================================6
//Square of a number using library functions || user given number
// void power(float n);

// int main()
// {
//     int n;
//     printf("Enter any number for power: ");
//     scanf("%d", &n);
//     power(n);
//     return 0;
// }

// void power(float n)
// {
//     printf("%f", pow(n, 2));
// }



//====================================7
//Functions to calculate Area of Square, Circle, Rectangle

// float area_square(float side);
// float area_circle(float radius);
// float area_rectangle(float height, float width);

// int main()
// {
//     float height, width, radius, side;
//     int num;
//     //practice   
//     printf("\nWhich area you wanna calculate?");
//     printf("\n1. Square\n2. Circle\n3. Rectangle");
//     printf("\nChoose (1/2/3): ");
//     scanf("%d", &num);
//     if (num == 1)
//     {
//         printf("\nEnter side: ");
//         scanf("%f", &side);
//         printf("\nSquare area: %f", area_square(side));
//     }
//     else if (num == 2)
//     {
//         printf("\nEnter radius: ");
//         scanf("%f", &radius);
//         printf("\nCircle area: %f", area_circle(radius));
//     }
//     else if (num == 3)
//     {
//         printf("\nEnter height: ");
//         scanf("%f", &height);
//         printf("\nEnter width: ");
//         scanf("%f", &width);
//         printf("\nRectangle area: %f", area_rectangle(height, width));
//     }
//     else
//     {
//         printf("\nInvalid Choise!!!");
//     }
    
//     return 0;
// }

// float area_square(float side)
// {
//     return pow(side, 2);
// }

// float area_circle(float radius)
// {
//     return 3.14 * pow(radius, 2);
// }

// float area_rectangle(float height, float width)
// {
//     return height * width;
// }



//>>>>>>>>>>RECURSION<<<<<<<<<<//
//>>>>>>>>>>RECURSIVE FUNCTION<<<<<<<<<<//
//=====LOOPS WORKS CAN BE IN RECURSION=====//

//====================================8
// void printHW(int count);

// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     printHW(n);
//     return 0;
// }

// void printHW(int count)
// {
//     if (count == 0)
//     {
//         return;
//     }
//     printf("\nhello world", count);
//     printHW(count-1);
// }


//====================================9
//Sum of first n natural numbers

// int sum(int n);

// int main()
// {
//     printf("\nSum is: %d", sum(5));
//     return 0;
// }
// //recursive function
// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     //sum of 1 to n
//     int sum_N_minus1 = sum(n-1);
//     int sumN = sum_N_minus1 + n;
//     return sumN;
// }


//====================================10
//Factorial of n
// int fact(int n);
// int main()
// {
//     int n;
//     printf("\nEnter a number: ");
//     scanf("%d", &n);
//     printf("\nFactorial of %d is: %d", n, fact(n));
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
    
//     int fact_N_minus1 = fact(n-1);
//     int factN = fact_N_minus1 * n;
//     return factN;
// }



//====================================11
//Converting Temp Celsius to Farenheit
// f = ((9*c)/5) + 32 || f = (1.8*c) + 32
// float convertTemp(float celsius);
// int main()
// {
//     float celsius;
//     printf("\nEnter temperature in celsius: ");
//     scanf("%f", &celsius);
//     // float farenheit = convertTemp(celsius);
//     // printf("\nThe temp in farenheit is: %f degree", farenheit);
//     printf("\nThe temp in farenheit is: %f degree", convertTemp(celsius));
//     return 0;
// }
// float convertTemp(float celsius)
// {
//     float farenheit = (celsius * 1.8) + 32;
//     return farenheit;
// }



//====================================12
//Function for calculate marks of a student in science, math, english
// int calcPercentage(int science, int math, int english);
// int main()
// {
//     int science, math, english;
//     char c = '%';
//     printf("\nEnter marks of science, math and english: ");
//     scanf("%d%d%d", &science, &math, &english);
//     printf("\nPercentage is: %d%c", calcPercentage(science, math, english), c);
//     return 0;
// }
// int calcPercentage(int science, int math, int english)
// {
//     return ((science + math + english) / 3);
// }



//====================================13
//Function for Fibonacci Sequence
// int fib(int n);

// int main()
// {
//     int n;
//     printf("\nEnter any number: ");
//     scanf("%d", &n);
//     fib(n);
//     return 0;
// }

// int fib(int n)
// {
//     //if (n == 0 || n == 1)
//     //{
//         if (n == 0)
//         {
//             return 0;
//         }
//         if (n == 1)
//         {
//             return 1;
//         }
//     //}
//     int fib_N_minus_2 = fib(n-2);
//     int fib_N_minus_1 = fib(n-1);
//     int fibN = fib_N_minus_2 + fib_N_minus_1;
//     //printf("\nFib of %d is: %d", n, fibN);
//     return fibN;
// }





//====================================14
//>>>>>>>>>>POINTERS<<<<<<<<<<//
//>>>>>>>>>>POINTERS<<<<<<<<<<//



// int main(void)
// {
//     int age = 22;
//     int *ptr = &age;      // *ptr not 'ptr
//     int value = *ptr;     // *ptr not 'ptr, and new variable
//     printf("\n%d", value);  // value not age=
//     printf("\n%d", age);
    
//     return 0;
// }


// int main(void)
// {
//     int n = 10, sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += (2 * i - 1);
        
//     }
//     printf("%d ", sum);
// }

// int main(void)
// {
//     int n = 10, sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += 2 * i;
//     }
//     printf("%d", sum);
// }



// int main(void)
// {
//     int n = 10;
//     for (int i = 4; i <= (3*n+1); i+=3)
//     {
//         printf("%d ", i);
//     }
// }

// int main(void)
// {
//     int n = 10, a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         a += 2;
//     }
// }

// int main(void)
// {
//     int n = 10, a = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         a *= 4;          // a = a * 2;
//     }
// }


// int main(void)
// {
//     int n = 34, a = 100;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         a -= 3;
//     }
// }


int main(void)
{
    printf("hello world");

}