//eligible for vote or not 
#include <stdio.h>
int main (){
    int age;
    printf("enter your age :-");
    scanf("%d",&age);

    if (age >=18){
        printf("you are elligible for voting \nTHANK YOU");
    }
    else{
        printf("you are not elligible for voting \nTHANKYOU");
    }
    return 0;
}