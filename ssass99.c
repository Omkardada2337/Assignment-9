// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num, check;
    system("cls");

    printf("Enter the even number : ");
    scanf("%d", &num);
    switch (check = num % 2)
    {
    case 0:
        num = num + 1;
        printf("The upper nearest odd number is %d", num);
        break;

    default:
        printf("You have not entered an even number");
        break;
    }

    getch();
    return 0;
}