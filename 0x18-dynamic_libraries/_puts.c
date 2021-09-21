#include "main.h"
#include <unistd.h>
/**
* _puts  - Entry point of a program
* @s: a param
* Return:  always 0, because is succes
*/
void _puts(char *s)
{
	write(1, s, _strlen(s));
}
