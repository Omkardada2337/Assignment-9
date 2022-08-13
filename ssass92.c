// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    char choice;
    int num1, num2;
    while (1)
    {
        system("cls");
        printf("\n\nEnter your choice : ");
        printf("\n\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n\n");
        scanf("%c", &choice);

        switch (choice)
        {
        case 'a':
            printf("Enter two numbers :");
            scanf("%d%d", &num1, &num2);
            printf("Addition is %d", num1 + num2);
            break;
        case 'b':
            printf("Enter two numbers :");
            scanf("%d%d", &num1, &num2);
            printf("Subtraction is %d", num1 - num2);
            break;
        case 'c':
            printf("Enter two numbers :");
            scanf("%d%d", &num1, &num2);
            printf("Multiplication is %d", num1 * num2);
            break;
        case 'd':
            printf("Enter two numbers :");
            scanf("%d%d", &num1, &num2);
            printf("Division is %d", num1 / num2);
            break;
        case 'e':
            break;
        }
        if (choice == 'e')
        {
            break;
        }
        getch();
    }
    return 0;
}