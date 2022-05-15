#include <stdarg.h>
#include "main.h"
#include <stddef.h>

/**
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */
int main () {
   FILE *fp;
   int c;

   fp = fopen("file.txt","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break;
      }
      printf("%c", c);
   }
   fclose(fp);
   return(0);
}
