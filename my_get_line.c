#include <stdio.h>
// Create our own get line function

void get_line()
{
  
}
int main()
{
   char *x[20];
   printf("Enter a number: ");
   while(*x != EOF || '\n')
   {
      *x = getchar();
   }
   
   printf("Your character = %c", x);

}
