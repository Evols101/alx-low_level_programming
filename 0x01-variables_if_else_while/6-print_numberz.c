#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'prints only using the putchar'
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
int num = 48;
while (num <= 57)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
