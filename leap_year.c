//leap year or not 
#include <stdio.h>
int main (){
    int year ;
    printf("enter any year to check it is leap year or not :- ");
    scanf("%d",&year);

    if ((year%100!=0 && year %4==0)||(year%400==0)){
        printf("%d is the LEAP year .",year);
    }
    else {
        printf("%d is NOT a LEAP year ",year);
    }
    return 0;
}