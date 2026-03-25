// String Problems
// 1.1 Code For Counting Length Of A String
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[1000];
//     printf("Enter Any String Value: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     int count = 0;
//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("The Length Of The String Is: %d", count);
// }




// 1.2 Code For Counting Length Of A String
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[1000];

//     printf("Enter Any String Value: ");

//     fgets(string, sizeof(string), stdin);

//     string[strcspn(string, "\n")] = '\0';

//     int count = strlen(string);

//     printf("The Length Of The String Is: %d", count);
// }




// 2. Code For Reverse A String
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[1000];

//     printf("Enter Any String Value: ");

//     fgets(string, sizeof(string), stdin);

//     string[strcspn(string, "\n")] = '\0';

//     strrev(string);

//     printf("The Reverse String Is: %s", string);
// }






// 3.1 Code For Checking If A String Is Palindrome Or Not
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[100];
//     char revstring[100];

//     printf("Enter Any String Value: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';

//     strcpy(revstring, string);

//     strrev(revstring);

//     int result = strcmp(string, revstring);

//     if (result == 0)
//     {
//         printf("The String Is Palindrome.");
//     }
//     else
//     {
//         printf("The String Is Not Palindrome.");
//     }
// }











// 3.2 Code For Checking If A String Is Palindrome Or Not
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string[100];
//     int isPalindrome = 1;
//     printf("Enter Any String Value: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';

//     for (int i = 0, j = strlen(string) - 1; i < j; i++, j--)
//     {
//         if (string[i] != string[j])
//         {
//             isPalindrome = 0;
//             break;
//         }
//     }
    
//     if(isPalindrome)
//     {
//         printf("The String Is Palindrome.");
//     }
//     else
//     {
//         printf("The String Is Not Palindrome.");
//     }
// }







// 4.1 Code For Counting Vowels And Consonants In A String
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
//     char string[1000];
//     int vowel = 0, consonant = 0;
//     printf("Enter Any String Value: ");
//     fgets(string, sizeof(string), stdin);
//     string[strcspn(string, "\n")] = '\0';
//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         char ch = tolower(string[i]);
//         if (isalpha(ch))
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             {
//                 vowel++;
//             }
//             else
//             {
//                 consonant++;
//             }
//         }
//     }
//     printf("The Number Of Vowels Is: %d", vowel);
//     printf("\nThe Number Of Consonants Is: %d", consonant);
// }




// 5. Code For Converting Lowercase to Uppercase (and vice versa)
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
//     char string[1000];
//     printf("Enter Any String Value: ");
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
//     printf("You String Converted To: %s\n", string);
    
// }





// 6. Code For Copying One String To Another
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char src[1000], dest[1000];
//     printf("Enter Any String Value To Source: ");
//     fgets(src, sizeof(src), stdin);
//     src[strcspn(src, "\n")] = '\0';

//     strcpy(dest, src);
//     printf("The Source String Is: %s\n", src);
//     printf("The Destination String Is: %s\n", dest);
// }









// 7. Code For Comparing Two Strings
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char string1[1000], string2[1000];

//     printf("Enter First String: ");
//     fgets(string1, sizeof(string1), stdin);
//     string1[strcspn(string1, "\n")] = '\0';

//     printf("Enter Second String: ");
//     fgets(string2, sizeof(string2), stdin);
//     string2[strcspn(string2, "\n")] = '\0';

//     int result = strcmp(string1, string2);

//     (result == 0) ? printf("Two Strings Are Equal.") : printf("Two Strings Are Not Equal.");

// }







// 8. Code For Counting Number Of Words From Sentence
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void) {
//     char sent[100];
//     int count = 0;

//     printf("Enter a sentence: ");
//     fgets(sent, sizeof(sent), stdin);
//     sent[strcspn(sent, "\n")] =' ';

//     for (int i = 0; sent[i] != '\0'; i++)
//     {
//         if (isspace(sent[i]))
//         {
//             count++;
//         }

//         else
//         {
//             continue;
//         }
//     }
//     printf("From Your Sentence Word Counted: %d",count);
// }







// 9. Code For Removing Vowels/Consonants From A String
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void) {
//     char word[1000];
//     printf("Enter Word To Remove Vowels From It: ");
//     fgets(word, sizeof(word), stdin);
//     word[strcspn(word, "\n")] = '\0';

//     char vowel[] = {'A','E','I','O','U','a','e','i','o','u'};
//     printf("Vowels are removed: ");
//     for (int i=0; word[i]!='\0'; i++ ) {
//         int isValid=1;
//         for (int j=0; j<10; j++) {
//             if (vowel[j] == word[i]) {
//                 isValid = 0;
//                 break;
//             } else {
//                 isValid = 1;
//                 continue;
//             }
//         }
//         if(isValid) {
//             printf("%c",word[i]);
//         }
//     }
// }












// 10. Code For Fibonacci Series Using Loop System
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void) {
//     int nterm;
//     printf("Enter the nth term: ");
//     scanf("%d", &nterm);

//     if (nterm==1) {
//         printf("Fibonacci series till nth term: 0");
//         printf("\nfib(n): 0");
        
//     } else if (nterm==2) {
//         printf("Fibonacci series till nth term: 1");
//         printf("\nfib(n): 1");

//     } else if(nterm<=0) {
//         printf("Invalid input, it's nterm>0");
//     } else {
//         printf("Fibonacci series till nth term: 0, 1");
//         int fib1=0;
//         int fib2=1;
//         int fibSum;
//         for (int i=2; i<nterm; i++) {
//             fibSum = fib1 + fib2;
//             fib1=fib2;
//             fib2=fibSum;
//             printf(", %d", fibSum);
//         }
//         printf("\nfib(n): %d",fibSum);
//     }
// }






// 11. Code For Printing All Prime Numbers From 1 To n
// #include <stdio.h>
// #include <math.h>
// int main(void) {
//     int num;
//     printf("Enter nth term for all prime numbers in between: ");
//     scanf("%d",&num);
    
//     printf("Prime numbers till nth term: ");
//     if (num==1) {
//         printf("1");
//     } else if (num>=2) {
//         for (int n=num; n>2; n--) {
//             int isPrime = 1;
//             for (int i=2; i<=sqrt(n); i++) {
//                 if (n%i == 0) {
//                     isPrime=0;
//                     break;
//                 } else {
//                     isPrime=1;
//                 }
//             }
//             if (isPrime) {
//                 printf("%d, ",n);
                
//             }
//         }
//         printf("1");
//     } else {
//           printf("only accepts positive integer");
//     }
// }






// 12. Code For Finding GCD or HCF Of Two Numbers
#include <stdio.h>
int main(void) {
    int num1, num2;
    printf("Enter the first value: ");
    scanf("%d", &num1);

    printf("Enter the second value: ");
    scanf("%d", &num2);
    
    int modulus, hcf;
    for (modulus = num1 % num2; modulus != 0; modulus = num1 % num2)
    {
        num1 = num2;
        num2 = modulus;
    }

    hcf = num1;
    printf("HCF is %d", hcf);
}


