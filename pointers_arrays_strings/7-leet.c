#include "main.h"

/**
 *leet - makes music
 *@music: the music
 *Return: music
 */
char *leet(char *music)
{
  int x = 0;
  
  while (music[x] != '\0')
  {
    if (music[x] == 65 || music[x] == 97)
    {
      music[x] = 52;
    }
    else if (music[x] == 69 || music[x] == 101)
    {
      music[x] = 51;
    }
    else if (music[x] == 79 || music[x] == 111)
    {
      music[x] = 48;
    }
    else if (music[x] == 84 || music[x] == 116)
    {
      music[x] = 55;
    }
    else if (music[x] == 76 || music[x] == 108)
    {
      music[x] = 49;
    }
    x++;
  }
return (music);
}
