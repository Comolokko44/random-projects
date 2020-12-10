#include <stdio.h>
#include <math.h>

int avrg(int a[8])
{
    int average=0;
    for(int g=0;g<8;g++){
        average=average+a[g];
    }
    average=average/8;
    return average;
}

int main(void)
{  
    int grade[8]= {22,46,99,100,67,79,82,9};
    printf("students' grades: ");
    for(int i=0;i<8;i++){
        printf("%4d",grade[i]);
    }
    printf("\n");
    int average=0;
    average=avrg(grade);
    printf("average: %d\n",average);
}
