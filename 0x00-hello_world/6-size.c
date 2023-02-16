#include <stdio.h>
/**
* main - A program that print the size of various computer typs
* Return 0(success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %lu unsigned byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu unsigned byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu unsigned byt(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu unsigned byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
