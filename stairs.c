#include <stdio.h>
#include <math.h>
//prints a triangle using nested loops.
int invertedstairs(void)
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        for(int f=number;f>i;f--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");   
    }
    return number;         
}
int stairs(void)
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");   
    }   
    return number;   
}
int main(void)
{
    int cntinue=0;
    do{
        int k=0;
        cntinue=0;
        printf("Press 1 if you want stairs, or press 2 if you want the inverted one: ");
        scanf("%d",&k);
        if(k==1){
            invertedstairs();
        }
        if(k==2){
            stairs();
        }
        printf("Press 1 if you want to do it again, 2 to exit: ");
        scanf("%d",&cntinue);
    }while(cntinue==1);
    printf("the program has ended.\n");
    return 0;
}
