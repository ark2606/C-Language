#include <stdio.h>
int main (){
   int x,y;
   printf("enter first number ");
   scanf("%d",&x);

   printf("enter second number ");
   scanf("%d",&y);

   x=x+y;
   y=x-y;
   x=x-y;
   printf("%d %d",x,y);
return 0;
}