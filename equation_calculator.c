#include<stdio.h>
#include<math.h>
//Change the equation coefficients to be taken from the user, and correctly produce the result of the equation according to the coefficients entered by the user and the x value.
int main(void){
    int x,y,z,t,f=0;
    printf("Enter an integer x:\n");
    scanf("%d",&x);
    printf("Enter the coefficients of the equation: \n");
    scanf("%d %d %d %d", &y,&z,&t,&f);
    int a=y*x*x*x+z*x*x+t*x+f;
    printf("The result of the equation is equal to %d when x = %d and the coefficients %d %d %d %d\n", a,x,y,z,t,f);
}
