#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct student
{
   int mat;
   char name[81];
   char addr[121];
   char phone[21];
} Student;

Student *tab[MAX];

void initialize(int n, Student **tab)
{
   for (int i = 0; i < n; i++)
      tab[i] = NULL;
}

int invalidVectorLimit(int n, int i)
{
   if (i < 0 || i >= n)
   {
      return 1;
   }
   else
      return 0;
}

void fill(int n, Student **tab, int i)
{
   if (invalidVectorLimit(n, i))
      exit(1);
   if (tab[i] == NULL)
      tab[i] = (Student *)malloc(sizeof(Student));
      
   printf("Matricula: ");
   scanf("%d", &tab[i]->mat);

   printf("Nome: ");
   scanf(" %80[^\n]", tab[i]->name);

   printf("Endereco: ");
   scanf(" %120[^\n]", tab[i]->addr);

   printf("Telefone: ");
   scanf(" %20[^\n]", tab[i]->phone);
}

void takeOff(int n, Student **tab, int i)
{
   if (invalidVectorLimit(n, i))
      exit(1);

   if (tab[1] != NULL)
   {
      free(tab[i]);
      tab[i] = NULL;
   }
}

void print(int n, Student **tab, int i)
{
   if (invalidVectorLimit(n, i))
      exit(1);

   if (tab[i] != NULL)
   {
      printf("Matricula: %d\n", tab[i]->mat);
      printf("Nome: %s\n", tab[i]->name);
      printf("Endereco: %s\n", tab[i]->addr);
      printf("Telefone: %s\n", tab[i]->phone);
   }
}

void printAllStudents(int n, Student **tab)
{
   for (int i = 0; i < n; i++)
      print(n, tab, i);
}

int main(int argc, char **argv)
{
   Student *tab[10];
   fill(10, tab, 0);
   fill(10, tab, 1);
   fill(10, tab, 2);
   printAllStudents(10, tab);
   takeOff(10, tab, 0);
   takeOff(10, tab, 1);
   takeOff(10, tab, 2);

   return 0;
}
