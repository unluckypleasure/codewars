#include <stdbool.h>

bool xo (const char* str)
{
  unsigned int i,k,z = 0;
  i = 0;
  k = 0;
  while (str[i] != '\0')
  {
    if (str[i] == 'X' || str[i] == 'x')
        k++;
    if (str[i] == 'o' || str[i] == 'O')
        z++;
    i++;
  }
  if (k == z)
    return true;
  return false;
}
