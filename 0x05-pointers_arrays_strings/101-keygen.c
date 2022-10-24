#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program to generate random password
 * description: find checksum value from objdump
 * Return: Return generated password
 */
int main(void)
{
int num;
srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
