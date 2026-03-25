int main(void)
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n-i); j >= 1; j--)
            printf(" ");

        for (int j = i; j >= 1; j--)
            printf("%d", j);

        for (int j = 2; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    for (int i = (n-1); i >= 1; i--)
    {
        printf(" ");
        for (int j = 1; j <= ((n-1)-i); j++)
            printf(" ");
            
        for (int j = i; j >= 1; j--)
            printf("%d", j);

        for (int j = 2; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}

