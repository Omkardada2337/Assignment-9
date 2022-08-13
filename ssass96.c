// 6. Program to check whether a year is a leap year or not. Using switch
// statement
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int year, check;
    system("cls");

    printf("Enter the year : ");
    scanf("%d", &year);
    check = year % 4;
    switch (check)
    {
    case 0:
        printf("It is a leap year");
        break;

    default:
        printf("It is not a leap year");
        break;
    }
    getch();
    return 0;
}