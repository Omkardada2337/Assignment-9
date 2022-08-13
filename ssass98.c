// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num, cal;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);
    switch (cal = num >= 0)
    {
    case 1:
        num = -1 * num;
        break;

    case 0:
        num = num * -1;
    }
    printf("The modified number is %d", num);

    getch();
    return 0;
}