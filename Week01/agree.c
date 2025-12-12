#include <cs50.h>
#include <stdio.h>

int main(void)
{
   char c = get_char("Do you agree? ");
   if (c == 'y' || c == 'Y') // Note: to test multiple logical conditions it's &&
   {
        printf("Agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
        printf("Did not agree.\n");
   }
   {
        printf("Did not agree.\n");
   }
}