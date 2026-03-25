#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>







//1. Finding the second largest >>>>>>>>>>>>>>>>>>>>>>>>>>
// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5, 6}, size = 6;
//     int temp;
//     // sorting array in the descending order
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     //finding the second distinct largest
//     int second = -1;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] != arr[0])
//         {
//             second = arr[i];
//             break;
//         }
//     }
//     if (second == -1) printf("\nThere is no second largest element (all are same)");
//     else printf("\nThe second largest element from the array is: %d", second);     
// }





//2. Finding the second smallest number >>>>>>>>>>>>>>>>>>>>>>>>>
// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5, 6}, size = 6;
//     int temp;
//     // sorting array in the ascending order
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     //finding the second distinct smallest
//     int second = -1;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] != arr[0])
//         {
//             second = arr[i];
//             break;
//         }
//     }
//     if (second == -1) printf("\nThere is no second smallest element (all are same)");
//     else printf("\nThe second smallest element from the array is: %d", second);     
// }







//3. Remove duplicate elements from the Array
// int main(void)
// {
//     int arr[] = {2,4,13,7,1,3,8,4,6,7};
//     int size = 10;
    
//     printf("\nThe array after removing duplicates: {");
    
//     for (int i = 0; i < size; i++)
//     {
//         int isNotDuplicate = 1;  // Assume current number is unique
        
//         if (i == 0) {
//             printf("%d", arr[i]);  // Always print first element
//             continue;
//         }
//         else {
//             for (int j = 0; j < i; j++) {  // Check all elements BEFORE current position
//                 if (arr[i] == arr[j]) {
//                     isNotDuplicate = 0;  // Found duplicate!
//                     break;
//                 }
//             }
//         }
        
//         if (isNotDuplicate) {
//             printf(",%d", arr[i]);  // Print if no duplicate found
//         }
//     }
//     printf("}");
// }






//4. Swap the first number with last number in an array
// int main(void)
// {
//     int arr[] = {2, 4, 6, 8, 10}, size = 5;
//     int temp;

//     printf("\nThe initial array is: {");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("}");

//     if (size > 1)
//     {
//         temp = arr[0];
//         arr[0] = arr[size - 1];
//         arr[size - 1] = temp;
//     }

//     printf("\nThe final array after swapping: {");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("}");
// }









//5. removing the third element in array
// int main(void)
// {
//     int array_a[]={5,9,10,2,4}, size=5;

//     printf("\nThe array after removing the third element {");

//     for (int i=0;i<size;i++)
//     {
//         if (i==2)        //skips the element array_a[2], the third element in the array
//         {         
//             continue;
//         }
//         else
//         {
//             printf("%d ",array_a[i]);
//         }
//     }
//     printf("}");
// }







//6. Move all zeroes in array to the end
// int main(void)
// {
//     int array_a[]={0,4,0,7,0,3,0,9}, size=8;
//     int zero_count=0;

//     printf("The array after moving all zeroes to the end {");

//     for (int i=0;i<size;i++)
//     {
//         if (array_a[i]!=0)
//         {
//             printf("%d ",array_a[i]);
//         }
//         else
//         {
//             zero_count++;
//         }
//     }

//     for (int i=0;i<zero_count;i++)
//     {
//         printf("0 ");
//     }
//     printf("}");
// }




