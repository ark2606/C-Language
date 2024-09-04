#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,s,area;
    
    printf("enter sides of triangle ");
    scanf("%f%f%f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %.2f m^2",area);
    return 0;
}