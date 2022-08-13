// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int s1, s2, s3;
    char choice;
    while (1)
    {
        system("cls");
        printf("\n\nEnter your choice :\n\n");
        printf("a. Check an isosceles triangle or not\nb. Check whether a right angled triangle or not");
        printf("\nc. Check whether equilateral triangle or not\nd. Exit\n");
        scanf("%c", &choice);
        switch (choice)
        {
        case 'a':
            printf("Enter the length of three sides :");
            scanf("%d%d%d", &s1, &s2, &s3);
            if (s1 == s2 || s2 == s3 || s3 == s1)
                printf("Yes it is an isosceles triangle");
            else
                printf("No it is not an isosceles triangle");
            break;
        case 'b':
            printf("Enter the length of three sides :");
            scanf("%d%d%d", &s1, &s2, &s3);
            if ((s1 != s2 != s3) || (s1 == s2 || s2 == s3 || s3 == s1))
                printf("Yes it is a right angled triangle");
            else
                printf("No it is not a right angled triangle");
            break;
        case 'c':
            printf("Enter the length of three sides :");
            scanf("%d%d%d", &s1, &s2, &s3);
            if (s1 == s2 == s3)
                printf("Yes it is an equilateral triangle");
            else
                printf("No it is not an equilateral triangle");
            break;
        case 'e':
            exit(0);
            break;

        default:
            break;
        }
        getch();
    }

    getch();
    return 0;
}