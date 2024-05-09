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
int isInside(Circle *, Point *);

int main(int argc, char **argv)
{
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
