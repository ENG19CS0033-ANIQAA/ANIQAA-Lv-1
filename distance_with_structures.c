//WAP to find the distance between two points using structures and 4 functions.

#include <stdio.h>
#include<math.h>
#include <stdlib.h>

struct Point
 {
   float x, y;
};
float Distance(struct Point a, struct Point b)
{
    float distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}
int main()
{
    struct Point a, b;
    printf("Enter coordinate of point a: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%d %d", &b.x, &b.y);
    printf("Distance between a and b: %lf\n",Distance(a, b);
    return 0;
}
