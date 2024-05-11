#include <stdio.h>

typedef struct point
{
   int x;
   int y;
} Point;

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y)
{
   if (x >= x0 && y >= y0 && x <= x1 && y <= y1)
      return 1;
   else
      return 0;
}

int main(int argc, char **argv)
{
   Point test;
   test.x = 2;
   test.y = 7;

   Point inf_left;
   inf_left.x = 1;
   inf_left.y = 1;

   Point sup_right;
   sup_right.x = 5;
   sup_right.y = 6;

   if (dentro_ret(inf_left.x, inf_left.y, sup_right.x, sup_right.y, test.x, test.y))
      printf("dentro do retangulo\n");
   else
      printf("fora do retangulo\n");
   return 0;
}
