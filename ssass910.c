// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int D, a, b, c, r1, r2;

    system("cls");

    printf("Enter the values of a,b and c of the quadratic equation : ");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D < 0)
    {
    case 0:
        r1 = (-b + sqrt(D)) / 2 * a;
        r2 = (-b - sqrt(D)) / 2 * a;
        printf("Roots are %d and %d", r1, r2);
        break;

    case 1:
        printf("Roots are imaginary");
        exit(0);
    }

    getch();
    return 0;
}