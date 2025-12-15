#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int change_owed;
    //Prompt user for change owed
    do
    {
        change_owed = get_int("Enter the amount of change owed: ");
    }
    while (change_owed < 0);
    int total_coins=0;
    //Figure out number of quarters
    int quarters=0;
    while (change_owed>=25)
    {
        change_owed-=25;
        quarters+=1;
    }

    //Figure out number of dimes
    int dimes=0;
    while (change_owed>=10)
    {
        change_owed-=10;
        dimes+=1;
    }

    //Figure out number of nickels
    int nickels=0;
    while (change_owed>=05)
    {
        change_owed-=05;
        nickels+=1;
    }

        //Figure out number of pennies
    int pennies=0;
    while (change_owed>=01)
    {
        change_owed-=01;
        pennies+=1;
    }

    total_coins=quarters+dimes+nickels+pennies;
    printf("%i\n", total_coins);
}
