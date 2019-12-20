#include <stdio.h>

int main (void)
{

   int x = fgetc(stdin);

   printf ("x = %d ('%c')\n", x, x); 
   x = fgetc(stdin);
   printf("x = %d\n", x); 		
   return 0;
}
	
