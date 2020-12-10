#include<stdio.h>
//calculates the properties of a rectangular prism with side lengths of 5, 7 and 10 units.
int main(void){
    int x=5;
    int y=7;
    int z=10;
    printf("The surface of the base: %i\n",x*y);
    printf("The lateral surface: %i\n",2*(x+y)*z);
    printf("The total surface: %i\n",2*(x*y)+2*(x+y)*z);
    printf("Volume: %i\n",x*y*z);
}
