#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    double x;
    double y;
} point_t;

typedef struct circle
{
    point_t center;
    double radius;
} circle_t;

int main()
{
    circle_t r;
    r.center.x = 1;
    r.center.y = 2;
    r.radius = 3;
    point_t t;
    t.x = 10;
    t.y = 1.5;
    double dx = r.center.x - t.x;
    double dy = r.center.y - t.y;
    double d = sqrt(dx * dx + dy * dy);
    if(d <= r.radius)
        printf("In");
    else
        printf("Out");
}