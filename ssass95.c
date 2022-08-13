/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int var;
    system("cls");

    printf("Enter the value of var :");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;

    default:
        printf("Invalid");
        break;
    }
    getch();
    return 0;
}
