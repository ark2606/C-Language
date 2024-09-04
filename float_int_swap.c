#include <stdio.h>
int main (){
    int i;
    float f;
    printf("enter a integer number :- ");
    scanf("%d",&i);

     f = (int)i;
    printf("your float number is %f\n",f);

    printf("enter a float number :- ");
    scanf("%f",&f);

    i = (int)f;
    

    printf("your integer number is %d",i);

   
    return 0;
}