#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getCityName()
{
   char cidade[81];
   scanf(" %80[^\n]", cidade);
   printf("%s", cidade);
}

void print(char *s)
{
   for (int i = 0; s[i] != '\0'; i++)
   {
      printf("%c", s[i]);
   }
   printf("\n");
}

int comprimento(char *s)
{
   int n = 0;
   for (int i = 0; s[i] != '\0'; i++)
      n++;
   return n;
}

void copy(char *orig, char *dest)
{
   int i;
   for (i = 0; orig[i] != '\0'; i++)
      dest[i] = orig[i];
   dest[i] = '\0';
}

void concatena(char *orig, char *dest)
{
   int i = 0;
   while (dest[i] != '\0')
      i++;
   for (int j = 0; orig[j] != '\0'; j++)
   {
      dest[i] = orig[j];
      i++;
   }
   dest[i] = '\0';
}

char *uppercase(char *c)
{
   for (int i = 0; c[i] != '\0'; i++)
   {
      if ((c[i] >= 'a') && (c[i] <= 'z'))
         c[i] = c[i] - 'a' + 'A';
   }
   return c;
}

int compara(char *s, char *s2)
{
   int i;

   for (i = 0; s[i] != '\0' && s2[i] != '\0'; i++)
   {

      if (s[i] < s2[i])
         return -1;
      else if (s[i] > s2[i])
         return 1;
   }
   if (s[i] == s2[i])
      return 0;
   else if (s2[i] != '\0')
      return -1;
   else
      return 1;
}

char *duplica(char *s)
{
   int n = strlen(s);
   char *d = (char *)malloc((n + 1) * sizeof(char));
   strcpy(d, s);
   return d;
}

char *invert_string(char *s)
{
   int n = (strlen(s) - 1);
   int temp = 0, i;

   char *s_inv = (char *)malloc((n + 1) * sizeof(char));

   for (i = n; i >= 0; i--)
   {
      s_inv[temp] = s[i];
      temp++;
   }

   s_inv[temp] = '\0';
   return s_inv;
}

int comprimento_rec(char *s)
{
   if (s[0] == '\0')
      return 0;
   else
      return 1 + comprimento_rec(&s[1]);
}

void copy_rec(char *dest, char *orig)
{
   dest[0] = orig[0];
   if (orig[0] != '\0')
      copy_rec(&dest[1], &orig[1]);
}

int main(void)
{
   char j[] = "jordanna";
   printf("%s", invert_string(j));
   return 0;
}
