#include "main.h"
#include "7-mozart.c"

/**
 *leet - entry
 *@string: the string
 *Return: the string
 */
char *leet(char *string);
{
  char newstring[100] = mozart(string);
  
  return(newstring);
}
