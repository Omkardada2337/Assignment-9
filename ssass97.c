// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int units;
    float bill;
    system("cls");

    printf("Enter the electricity units :");
    scanf("%d", &units);
    switch (units)
    {
    case 0 ... 50:
        bill = 0.5 * units;
        break;
    case 51 ... 150:
        bill = 0.75 * units;
        break;
    case 151 ... 250:
        bill = 0.5 * units;
        break;
    case 251 ... 1000:
        bill = 0.5 * units;
        break;
    }
    printf("Your Electricity bill is %.4f", bill + (0.2 * bill));
    getch();
    return 0;
}