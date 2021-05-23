#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Find out how many times 25 fits into the number until your remainder is less than 25.
    // Find out how many times 10 fits into the number until your remainder is less than 10.
    // Find out how many times 5 fits into the number until your remainder is less than 5.
    // Find out how many times 1 fits into the number until your remainder is less than 1.

    int quarter;
    int dime;
    int nickel;
    int penny;
    float change;
    int coins;

    do
    {
        change = get_float("How much change? ");
    }
    while (change < 0);

    change = change * 100;

    do
    {
        quarter = change / 25;
        change = change - (quarter * 25);
        dime = change / 10;
        change = change - (dime * 10);
        nickel = change / 5;
        change = change - (nickel * 5);
        penny = change / 1;
        change = change - (penny * 1);

    }
    while (change > 0);
    coins = penny + nickel + dime + quarter;
    printf("%i\n", coins);

}
