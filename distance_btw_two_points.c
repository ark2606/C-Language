#include <stdio.h>
#include <math.h>
    int main (){
        float x,y,a,b,dist;

        printf("enter your first point coordinates (x,y)");
        scanf("%f%f",&x,&y);

        printf("enter your second point coordinates (x,y)");
        scanf("%f%f",&a,&b);

        dist = sqrt((x-a)*(x-a) + (y-b)*(y-b));

        printf("The distance betweeen two point is %f",dist);

    return 0;
    }