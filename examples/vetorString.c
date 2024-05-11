#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

char *readLine(void)
{
   char line[121];
   printf("type a name: ");
   scanf(" %120[^\n]", line);
   return strdup(line);
}

int readNames(char **students)
{
   int i, n;
   do
   {
      printf("Type the number of students: ");
      scanf("%d", &n);
   } while (n > MAX);

   for (i = 0; i < n; i++)
      students[i] = readLine();
   return n;
}

void clearNames(int n, char **students)
{
   for (int i = 0; i < n; i++)
      free(students[i]);
}

void printNames(int n, char **students)
{
   for (int i = 0; i < n; i++)
      printf("%s\n", students[i]);
}

int main(void)
{
   char *students[MAX];
   int n = readNames(students);

   printNames(n, students);
   clearNames(n, students);

   return 0;
}
