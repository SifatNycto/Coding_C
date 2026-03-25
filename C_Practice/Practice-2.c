// 1. Check even or odd number
// #include <stdio.h>
// int main(void)
// {
//     int num, result;
//     printf("Enter a number: ");
//     result = scanf("%d", &num);
//     if (result == 0)
//     {
//         printf("Invalid Input!");
//         return 0;
//     }
    
//     if (num == 0)
//     {
//         printf("Opps, You entered Zero.");
//         return 0;
//     }
    
//     num % 2 == 0
//         ? printf("The number %d is Even number.", num)
//         : printf("The number %d is Odd number.", num);
//     return 0;
// }



// 2. Finding the largest of two numbers
// #include <stdio.h>
// int main(void)
// {
//     int n1, n2;

//     printf("Enter number-1: ");
//     if (scanf("%d", &n1) != 1)
//     {
//         printf("Invalid number-1 input!");
//         return 0;
//     }
     
//     printf("Enter number-2: ");
//     if (scanf("%d", &n2) != 1)
//     {
//         printf("Invalid number-2 input!");
//         return 0;
//     }

//     n1 > n2
//         ? printf("%d is largest number.", n1)
//         : n1 < n2
//             ? printf("%d is the largest number.", n2)
//             : printf("both numbers are equal.");
//     return 0;
// }



// 3. Check a number if it is positive, negative or zero
// #include <stdio.h>
// int main(void)
// {
//     float n1;
//     printf("Enter a number: ");
//     int result = scanf("%f", &n1);
    
//     if (result != 1)
//     {
//         printf("Invalid Input!");
//         return 0;
//     }

//     n1 > 0
//         ? printf("The number '%.2f' is a Positive number.", n1)
//         : n1 == 0
//             ? printf("The number is a Zero.")
//             :printf("The number '%.2f' is a Negative number.", n1);
//     return 0;
// }



// 4. Checking if a person is eligible to vote or not
// #include <stdio.h>
// int main(void)
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if (age <= 0)
//     {
//         printf("Invalid Input!\nAre you kidding!");
//         return 0;
//     }
    
//     age >= 18
//         ? printf("You are Eligible to vote.")
//             : printf("Opps, You are child.\nYou are not Eligible to vote.");
//     return 0;
// }



// 5. Check if two number is equal or not
// #include <stdio.h>
// int main(void)
// {
//     float n1, n2;
//     printf("Enter number-1: ");
//     if (scanf("%f", &n1) != 1)
//     {
//         printf("Invalid number-1 input!");
//         return 0;
//     }
    
//     printf("Enter number-2: ");
//     if (scanf("%f", &n2) != 1)
//     {
//         printf("Invalid number-2 input!");
//         return 0;
//     }
    
//     n1 == n2
//         ? printf("Both numbers are equal.")
//         : printf("Both numbers are not equal.");
//     return 0;
// }




// 6. Students grade basesd on marks
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int marks;
//     char grade[3];
//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     if (marks < 0 || marks > 100)
//     {
//         printf("Invalid marks input!");
//         return 0;
//     }
//     else
//     {
//         strcpy(grade,   (marks >= 80) ? "A+"
//                       : (marks >= 70) ? "A"
//                       : (marks >= 60) ? "B"
//                       : (marks >= 50) ? "C"
//                       : (marks >= 40) ? "D"
//                       : "F");
//     }
    
//     printf("Your grade is: %s", grade);
// }




// 7. Checking leap year or not
// #include <stdio.h>
// int main(void)
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//         ? printf("The year '%d' is a leap year.", year)
//         : printf("The year '%d' is not a leap year.", year);
//     return 0;
// }




// 7.2 Checking leap year or not
// #include <stdio.h>
// int main(void)
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     (year % 400 == 0)
//         ? printf("The year '%d' is a leap year.", year)
//         : (year % 100 == 0)
//             ? printf("The year '%d' is not a leap year.", year)
//             : (year % 4 == 0)
//                 ? printf("The year '%d' is a leap year.", year)
//                 : printf("The year '%d' is not a leap year.", year);
// }








// 8. Checking a number if it is in range (40-90)
// #include <stdio.h>
// int main(void)
// {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     number >= 40 && number <= 90
//         ? printf("The number '%d' is in the valid range.", number)
//         : printf("The number '%d' is not in the valid range.", number);
//     return 0;
// }



// 9. Checking a character is it vowel or consonant
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//     {
//         char letter = tolower(ch);
//         if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
//         {
//             printf("%c is the Vowel.", ch);
//         }
//         else
//         {
//             printf("%c is the Consonant.", ch);
//         }
//     }
//     else
//     {
//         printf("Invalid character!\nIt's not an Alphabet.");
//     }
//     return 0;
// }

// agian 9
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf(" %c", &ch);

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//     {
//         if (isalpha(ch))
//         {
//             char c = tolower(ch);
//             if (c == 'a' || c == 'e' || c == 'i'|| c == 'o'|| c == 'u')
//             {
//                 printf("the %c character is a vowel.", ch);
//             }
//             else
//             {
//                 printf("the %c character is a consonant.", ch);
//             }
//         }
//     }
//     else
//     {
//         printf("its not an alphabet.");
//     }    
// }


// vowels consonants showing and counting
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char word[500];
//     printf("Enter any word: ");
//     fgets(word, sizeof(word), stdin);
//     word[strcspn(word, "\n")] = '\0';
//     char vowels[] = "AEIOUaeiou";
//     char consonants[] = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
//     int vowelcount = 0, consonantcount = 0;
//     char vowellist[500] = "", consonantlist[500] = "";
//     for (int i = 0; word[i] != '\0'; i++)
//     {
//         for (int j = 0; vowels[j] != '\0'; j++)
//         {
//             if (vowels[j] == word[i])
//             {
//                 vowelcount++;
//                 char tempvow[100];
//                 tempvow[0] = word[i], tempvow[1] = ' ', tempvow[2] = '\0';
//                 strcat(vowellist, tempvow);
//             }
            
//         }
//         for (int k = 0; consonants[k] != '\0'; k++)
//         {
//             if (consonants[k] == word[i])
//             {
//                 consonantcount++;
//                 char tempcon[100];
//                 tempcon[0] = word[i], tempcon[1] = ' ', tempcon[2] = '\0';
//                 strcat(consonantlist, tempcon);
//             }
            
//         }
        
        
//     }

//     printf("Here ->\nVowels counted: %d\nVowels are: %s\n", vowelcount, vowellist);
//     printf("Consonants counted: %d\nConsonants are: %s", consonantcount, consonantlist);
// }





// Vowels Consonants Showing and Counting
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char word[500];
//     printf("Enter any word: ");
//     fgets(word, sizeof(word), stdin);
//     word[strcspn(word, "\n")] = '\0';
    
//     char vowels[] = "AEIOUaeiou";
//     char consonants[] = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    
//     int vowelcount = 0, consonantcount = 0;
//     char vowellist[500] = "", consonantlist[500] = "";
    
//     for (int i = 0; word[i] != '\0'; i++)
//     {
//         if (strchr(vowels, word[i]))
//         {
//             vowelcount++;
//             char temp[3] = { word[i], ' ', '\0' };
//             strcat(vowellist, temp);
//         }
//         else if (strchr(consonants, word[i]))
//         {
//             consonantcount++;
//             char temp[3] = { word[i], ' ', '\0' };
//             strcat(consonantlist, temp);
//         }
//     }

//     printf("Here ->\nVowels counted: %d\nVowels are: %s\n", vowelcount, vowellist);
//     printf("Consonants counted: %d\nConsonants are: %s\n", consonantcount, consonantlist);
// }



// 20. String Reverse
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[500], reversed[500];
//     printf("Enter any string: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     strcpy(reversed, string);
//     strrev(string);
//     strcmp(reversed, string) == 0
//         ? printf("It's Palindrome.")
//         : printf("It's Not Palindrome.");
// }





// 11. Reverse a number
// #include <stdio.h>
// int main(void)
// {
//     int num, reversed = 0;
//     printf("enter any number to reverse: ");
//     scanf("%d", &num);

//     while (num != 0)
//     {
        
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     printf("the reversed number is %d", reversed);
    
// }


// 12. Palindrome Number
// #include <stdio.h>
// int main(void)
// {
//     int num, reversed = 0, original;
//     printf("enter any number: ");
//     scanf("%d", &num);
//     original = num;
//     while (num != 0)
//     {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     original == reversed
//     ? printf("the number is palindrome.")
//     : printf("the number is not palindrome.");
    
// }




// 13. Counting digits from number
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int num, count = 0, temp;
//     printf("enter any number: ");
//     scanf("%d", &num);
//     temp = (num < 0) ? -num : num;
//     count = (temp == 0) ? 1 : floor(log10(temp)) + 1;
//     // while (temp != 0)
//     // {
//     //     temp /= 10;
//     //     count++;
//     // }
//     printf("Digits counted from the number is: %d", count);
// }



// 14. Sum of digits from number
// #include <stdio.h>
// int main(void)
// {
//     int num, sum = 0, temp;
//     printf("enter any number: ");
//     scanf("%d", &num);
//     temp = (num < 0) ? -num : num;
//     while (temp != 0)
//     {
//         sum = sum + temp % 10;
//         temp /= 10;
//     }
//     printf("the sum of digits from number is: %d", sum);
    
// }




// 15. Finding factorial number
// #include <stdio.h>
// int main(void)
// {
//     int num, fact = 1;
//     printf("enter any number: ");
//     scanf("%d", &num);
//     if (num < 0)
//     {
//         printf("Opps... Invalid Input!!!\n");
//         printf("Factorial of negative number is not possible.");
//         return 0;
//     }
    
//     for (int i = 1; i <= num; i++)
//     {
//         fact *= i;
//     }
//     printf("the factorial of %d is: %d", num, fact);
// }


// 16. Checking a number is prime or not
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int num, isprime = 1;
//     printf("enter any number to check prime or not: ");
//     scanf("%d", &num);
//     if (num < 2)
//     {
//         printf("the number %d is not a prime number.", num);
//         return 0;
//     }

//     int limit = sqrt(num);
//     for (int i = 2; i <= limit; i++)
//     {
//         if (num % i == 0)
//         {
//             isprime = 0;
//             break;
//         }
        
//     }
//     isprime
//         ? printf("%d is prime number.", num)
//         : printf("%d is not prime number.", num);
    
// }


// 28. prime numbers 2 to n
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int num;
//     printf("enter number: ");
//     scanf("%d", &num);
//     if (num < 2)
//     {
//         printf("no prime numbers up to %d", num);
//         return 0;
//     }

//     printf("prime numbers up to %d are: ", num);

//     for (int n = 2; n <= num; n++)
//     {
//         int isprime = 1;
//         int limit = sqrt(n);
//         for (int i = 2; i  <= limit; i++)
//         {
//             if (n % i == 0)
//             {
//                 isprime = 0;
//                 break;
//             }
//         }
        
//         if (isprime)
//         {
//             printf("%d ", n);
//         }
//     }
//     printf("\n");
// }





// 19. reverse string
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[500];
//     char original[500];
//     printf("enter any string.: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     strcpy(original, string);
//     strrev(string);
//     printf("the reversed of %s is: %s", original, string);
// }

// 18. string length
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[500];
//     printf("enter any string.: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     int length = strlen(string);
//     printf("the length of %s is: %d", string, length);
// }



// vow con counting
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
//     char string[1000];
//     int vowelcount = 0, consonantcount = 0;
//     printf("enter any string: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         char ch = tolower(string[i]);
//         if (isalpha(ch))
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             {
//                 vowelcount++;
//             }
//             else
//             {
//                 consonantcount++;
//             }
//         }
        
//     }
//     printf("vowels counted: %d\n consonants counted: %d\n", vowelcount, consonantcount);
    
// }



// 22. convert lower case to uppercase and vice versa
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
//     char string[1000];
//     printf("enter any string: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         if (isupper(string[i]))
//         {
//             string[i] = tolower(string[i]);
//         }
//         else if (islower(string[i]))
//         {
//             string[i] = toupper(string[i]);
//         }    
//     }
//     printf("your string converted to: %s", string);
    
// }





// 23. copying a string
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[1000];
//     char copied[1000];
//     printf("enter any string: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     strcpy(copied, string);
//     printf("your original string: %s", string);
//     printf("\ncopied string: %s", copied);
// }




// #include <stdio.h>
// int main(void)
// {
//     int num;
//     printf("enter a number: ");
//     scanf("%d", &num);
//     for (int i = num; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ", j);
//         }
//         printf("\n");
//     }
    
// }


// Que7 all the patterns number version
// //v1
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
//    for (int i=1; i<=num; i++) {
//         for (int j=1;j<=i;j++) {
//             printf("%d",j);
//         }
//         printf("\n");
//    }
// }
// //Output:
// // 1
// // 12
// // 123
// // 1234
// // 12345

// //v2
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
  
//    for (int i=num; i>=1; i--) {
//         for (int j=1;j<=i;j++) {
//             printf("%d",j);
//             }
//         printf("\n");
//     }
// }
// //Output:
// // 12345
// // 1234
// // 123
// // 12
// // 1

// //v3
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
  
//    for (int i=num, k=0; i>=1; i--,k++) {
//         for (int j=1;j<=k;j++)
//         {
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// // 12345
// //  1234
// //   123
// //    12
// //     1

// //xxxxxxxxxxxxxxxxx





// //v4
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
  
//    for (int i=1, k=num-1; i<=num; i++,k--) {
//         for (int j=1;j<=k;j++) {
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// //     1
// //    12
// //   123
// //  1234
// // 12345
// //xxxxxxxxxxxxxxxxxx


// //v5
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
//    for (int i=num; i>=1; i--) {
//         for (int j=num;j>=i;j--) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// // 5
// // 54
// // 543
// // 5432
// // 54321

// //v6
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
//    for (int i=1; i<=num; i++) {
//         for (int j=num;j>=i;j--) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// // 54321
// // 5432
// // 543
// // 54
// // 5

// //v7
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
  
//    for (int i=1, k=0; i<=num; i++,k++) {
//         for (int j=1;j<=k;j++) {
//             printf(" ");
//         }
//         for (int j=num;j>=i;j--) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// // 54321
// //  5432
// //   543
// //    54
// //     5

// //v8
// int main(void) {
//    int num;
//    printf("enter the number: ");
//    scanf( "%d", &num);
//    printf("\nHere:\n");
  
//    for (int i=num, k=num-1; i>=1; i--,k--) {
//         for (int j=1;j<=k;j++) {
//             printf(" ");
//         }
//         for (int j=num;j>=i;j--) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// //Output:
// //     5
// //    54
// //   543
// //  5432
// // 54321




// HCF
// #include <stdio.h>
// int main(void)
// {
//     int num1, num2, temp;
//     printf("enter num1 big: ");
//     scanf("%d", &num1);
//     printf("enter num2 small: ");
//     scanf("%d", &num2);
//     while (num2 != 0)
//     {
//         temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     printf("the hcf is: %d", num1);
    
// }



// #include <stdio.h>
// int main(void)
// {
//     int num = 5;
//     // printf("enter a number: ");
//     // scanf("%d", &num);
//     for (int i = num; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
    
// }


// #include <stdio.h>

// int main(void) {
//     int n = 5; // number of rows

//     for (int i = 1; i <= n; i++) {        // outer loop (rows)
//         for (int j = 1; j <= n; j++) {    // inner loop (spaces + stars)
//             if (j <= n - i)
//                 printf(" ");  // print space
//             else
//                 printf("%d",j);  // print star
//         }
//         printf("\n"); // next line
//     }

//     return 0;
// }




// #include <stdio.h>
// #define _USE_MATH_DEFINES
// #include <math.h>
// int main(void)
// {
//     int x = 1;
//     float result = (float)M_PI * x;
//     printf("%f", result);
// }


// #include <stdio.h>
// #include <stdbool.h>
// int main(void)
// {
//     int num = 245493;
//     bool iseven;

//     num % 2 == 0
//         ? (iseven = true)
//             : (iseven = false);

//     // if (num % 2 == 0)
//     // {
//     //     iseven = true;
//     // }
//     // else
//     // {
//     //     iseven = false;
//     // }

//     iseven
//         ? printf("%d is even number.", num)
//             : printf("%d is odd number.", num);
    
    
// }

// #include <stdio.h>

// int main(void) {
//     int num;
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     // Count digits by reversing logic
//     int rev = 0, temp = num;
//     while (temp > 0) {
//         rev = rev * 10 + temp % 10;  // reverse number
//         temp /= 10;
//     }

//     // Print digits in correct order
//     while (rev > 0) {
//         printf("%d\n", rev % 10);
//         rev /= 10;
//     }

//     return 0;
// }





// #include <stdio.h>
// int main(void)
// {
//     int num = 1234, multip = 1;
//     while (num != 0)
//     {
//         multip *= num % 10;
//         num /= 10;
//     }
//     multip /= 2;
//     printf("%d", multip);
// }