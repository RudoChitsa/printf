#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * @format: variable
 * int len;
 * int len2;
 * unsigned int ui;
 * void *addr;
 * Return: nbytes printed.
 */
int _printf(const char *format, ...);
{
     printf("1234567890123%n4567890123456789\n\n", &count);          
    printf("Value of count should be 13; count = %d\n\n", count);   
    printf("%10c%5c\n", ch, ch);                                    
    printf("%25s\n%25.4s\n\n", string, string);                     
    printf("%f    %.2f    %e    %E\n\n", fp, fp, fp, fp);           
    printf("%i    %i     %i\n\n", hex, oct, dec); 
