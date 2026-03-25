#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void)
{
    int number = 5;
    int *ptr = &number;

    printf("\n%d", number);
    printf("\n%d", &number);
    printf("\n%d", *ptr);
    printf("\n%d", ptr );
}





#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;
    printf("Value: %d", *ptr);
    printf("\nAddress: %p", ptr);
    return 0;
}
