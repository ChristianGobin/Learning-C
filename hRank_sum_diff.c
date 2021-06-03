#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float z,a;
    scanf("%d %d", &x, &y);
    scanf("%f %f", &z, &a);
    printf("%d %d\n", x+y, x-y);
    printf("%.1f %.1f\n", z+a, z-a );
	
    
    return 0;
}
