#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>


//STRUCTURE
//1. students grading >>>>>>>>>>>>>>>>>>>>>>>>
// struct student {
//     int roll;
//     char name[100];
//     float s1, s2, s3;
// };
// float avg(struct student s) {
//     return ((s.s1 + s.s2 + s.s3) / 3.00);
// }
// char grade(float avg) {
//     if (avg >= 80) return 'A';
//     else if (avg >= 70) return 'B';
//     else if (avg >= 60) return 'C';
//     else if (avg >= 50) return 'D';
//     else if (avg >= 40) return 'E';
//     else return 'F';
// }
// int main() {
//     struct student s;
//     printf("\nEnter a name: ");
//     scanf(" %s", s.name);
//     printf("\nEnter a roll number: ");
//     scanf("%d", &s.roll);
//     printf("\nEnter 1st subject marks: ");
//     scanf("%f", &s.s1);
//     printf("\nEnter 2nd subject marks: ");
//     scanf("%f", &s.s2);
//     printf("\nEnter 3rd subject marks: ");
//     scanf("%f", &s.s3);
//     printf("\nName: %s", s.name);
//     printf("\nRoll: %d", s.roll);
//     float average = avg(s);
//     printf("\nAverage: %.2f", average);
//     printf("\nGrade: %c", grade(average));
//     return 0;
// }





//2. area of rectangle >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct rect
{
    float h;
    float w;
};

float area(struct rect r)
{
    return r.h * r.w;
}

int main()
{
    struct rect r;
    printf("\nEnter the height: ");
    scanf("%f", &r.h);
    printf("\nEnter the width: ");
    scanf("%f", &r.w);
    
    printf("\nThe Area of the Rectangle is: %.2f", area(r));
    return 0;
}




