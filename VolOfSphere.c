#include <stdio.h>
#define VOLUME ((4.0f/3.f) * r * r * r)
#define PI 3.142
int main (void)
{
    int r;
    printf("Enter radius of sphere: ");
    scanf("%d", &r);
    printf("Volume of sphere is %f\n", VOLUME);
    return 0;
}