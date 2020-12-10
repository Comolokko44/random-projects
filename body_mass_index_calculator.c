#include <stdio.h>
#include <math.h>

int pulse(int age) //maximum pulse function
{
    int maxvalue;
    maxvalue=220-age;
    return maxvalue;
}
float index(float weight,float height) //body mass index function
{
    float bmindex;
    bmindex=(weight/(height*height));
    return bmindex;
}
int main(void)
{
    int age1,pulse1;
    float weight1,height1,bmindex1;

    printf("your age: \n");
    scanf("%d",&age1);
    pulse1=pulse(age1);
    printf("Your maximum heart pulse: %d\n",pulse1);
    int cntinue=0;    //The variable that will make the while loop possible

    do{
        cntinue=0;
        printf("Enter your weight (kg) and height (m): \n");
        scanf("%f",&weight1);
        scanf("%f",&height1);
        bmindex1=index(weight1,height1);

        if(bmindex1<18.5){
            printf("Your body mass index: %f (thin)\n",bmindex1);
        }
        else if(bmindex1>=18.5 && bmindex1<25){
            printf("Your body mass index: %f (normal)\n",bmindex1);
        }
        else if(bmindex1>=25 && bmindex1<30){
            printf("Your body mass index: %f (overweight)\n",bmindex1);
        }
        else if(bmindex1>=30){
            printf("Your body mass index: %f (obese)\n",bmindex1);
        }
        printf("please press 1 to continue: \n");
        scanf("%d",&cntinue);
    }while(cntinue ==1);
    if(cntinue!=1){
        printf("the application has ended.\n");
    }
}
