#include <stdio.h>
#include <math.h>

typedef struct point
{
   float x;
   float y;
} Point;

typedef struct circle
{
   Point p;
   float r;
} Circle;

float distance(Point *, Point *);
float area(int, Point *);
int isInside(Circle *, Point *);
Point geometricCenter(int, Point *);

int main(int argc, char **argv)
{
   Point p[3] = {
       {1.0, 1.0},
       {5.0, 1.0},
       {4.0, 3.0}};
   printf("area = %.2f\n", area(3, p));
   return 0;
}

float distance(Point *p, Point *q)
{
   float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
   return d;
}

int isInside(Circle *c, Point *p)
{
   float d = distance(&c->p, p);
   return (d < c->r);
}

float area(int n, Point *p)
{
   int i, j;
   float a = 0;

   for (i = 0; i < n; i++)
   {
      j = (i + 1) % n;
      a += (p[j].x - p[i].x) * (p[i].y + p[j].y) / 2;
   }

   return fabs(a);
}

Point geometricCenter(int n, Point *v)
{
   Point p = {0.0f, 0.0f};
   for (int i = 0; i < n; i++)
   {
      p.x += v[i].x;
      p.y += v[i].y;
   }
   p.x /= n;
   p.y /= n;
   return p;
}
