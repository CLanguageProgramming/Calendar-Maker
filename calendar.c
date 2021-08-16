#include <stdio.h>

int main()
{
    printf("Welcome to The Calendar program\n");
    printf("Number of days min=28 and max=31 =>>");
    int ndays;
    scanf("%d", &ndays);
    if(ndays < 28 || ndays > 31)
    {
        goto incorrect;
    }
    printf("Enter 1 for the calendar to start from Sunday.\n");
    printf("Enter 2 for the calendar to start from Monday.\n");
    printf("Enter 3 for the calendar to start from Tuesday.\n");
    printf("Enter 4 for the calendar to start from Wednesday.\n");
    printf("Enter 5 for the calendar to start from Thursday.\n");
    printf("Enter 6 for the calendar to start from Friday.\n");
    printf("Enter 7 for the calendar to start from Saturday.\n");
    printf("Enter a date >> ");
    int sdays;
    scanf("%d", &sdays);
    if (sdays < 0 || sdays > 7)
    {
        goto incorrect;
    }
    else
    {
       printf("Final Result\n");
    }
    printf("Su   ");
    printf("Mo   ");
    printf("Tu   ");
    printf("We   ");
    printf("Th   ");
    printf("Fr   ");
    printf("Sa\n");
    int i=1;
    int j=1;
    for(i=1;i<sdays;i++)
    {
        printf("     ");
    }
    for (i=sdays; i <= sdays+ndays-1; i++)
    {
        if(j < 10)
        {
            printf("0%d   ", i-sdays+1);
            j++;
        }
        else
        {
            printf("%d   ", i-sdays+1);
            j++;
        }
        if (i % 7 == 0)
        {
            printf("\n");
        }
        else
        {
            continue;
        }
    }
    printf("\nThank you\n");
    getchar();
    return 0;

    incorrect:
                printf("Wrong Number. Please try later.\n");
                getchar();
}
