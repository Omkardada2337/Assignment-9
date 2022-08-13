// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the day number : ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Good monday ");
        break;
    case 2:
        printf("Happy Tuesday");
        break;
    case 3:
        printf("Wealthy Wednesday");
        break;
    case 4:
        printf("Good Thursday");
        break;
    case 5:
        printf("Good Friday");
        break;
    case 6:
        printf("Happy Saturday");
        break;
    case 7:
        printf("Sweet Sunday");
        break;

    default:
        printf("INVALID DAY NUMBER");
        break;
    }

    getch();
    return 0;
}