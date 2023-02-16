#include <stdio.h>
#include <string.h>
#include <conio.h>


void zamena()
{
  char r;
  char str [100];
  char str2 [100];
  printf ("vvod stroki: ");
  gets (str);
  printf ("bpvtybnm yf simvol= ");
  r = getch ();
  printf ("%c\n", r);
  str [0] = r;
  str [strlen (str) - 1] = r;
  printf ("result: ");
  puts (str);
}

void dell ()
{
  char str [100];
  char str2 [100];
  printf ("dell probelov: ");
  gets (str);
  int start = 0, end = strlen (str);
  for (int i = 0; i < strlen (str); i++)
  {
    if (str[i] != ' ')
    {
      break;
    }
    else
    {
      start++;
    }
  }

  for (int x = (strlen(str)) -1; x > 0; x--)
  { 
    if (str[x] != ' ')
    {
      break;
    }
    else
    {
      end--;
    }
  }
  int j = 0;
  for (int i = start; i < end; i++)
  {
    str2[j] = str[i];
    j++;
  }
  str2 [j] = str [strlen(str)];
  printf ("result: ");
  puts (str2);
}

int main()
{
  zamena ();
  dell ();  
  return 1;
}
