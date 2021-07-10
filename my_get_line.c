#include <stdio.h>
// Create our own get line function that takes user input and repeats it in console.

void get_print_line()
{
   char x;
   while(x != EOF || x != 'n')
   {
      x = getchar();
      putchar(x);
   }
}

int main()
{
   //user enums
   enum programs {
      DataScience,
      EmbeddedSystems,
      WebDevelopment
   };
   char *program_array[3] = {"Data Science", "Embedded Systems", "Web Development"};
   
   printf("My program is: %s\n", program_array[EmbeddedSystems]);
   
   // Get and repeat line
   get_print_line();
   
   
}
