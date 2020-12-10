#include <stdio.h>
//Finds the largest by comparing the 3 numbers entered
int main(void)
{
    int a,b,c=0;
    printf("Enter 3 integers:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c){
        printf("maximum: %d \n",a);
    }
    else if(b>a && b>c){
        printf("maximum: %d \n",b);
    }
    else if(c>a && c>b){
        printf("maximum: %d \n",c);
    }
    else{
        printf("all numbers are equal!\n");
    }
}
