#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float mdagilim[6];
float sensor[150];
float toplam=0;
int histogram[8]={};

float ortalama(float n[150])
{
    float total=0;
    float ort=0;
    for(int i=0;i<150;i++){
        total = total + n[i];
    }
    ort = total/150;
    return ort;
}
float min(float n[])
{    
    float min=0;
    for (int i = 0; i<150; i++){
        if (n[i] < min){
            min = n[i];
        }
    }
    return min;
}
float max(float n[])
{
    float max = 0;
    for (int i = 0; i<150; i++){
        if (n[i] > max)
            max = n[i];      
    }
    return max;
}
float std(float n[]){
    float aritmetikort = ortalama(n);
    float total = 0;
    float standartsapma = 0;
    
    for(int i = 0; i < 150; i++){      
        total = total + pow(n[i] - aritmetikort,2 );      
    }
    
    return sqrt(total/149);
}

int main(void)
{
    srand(time(0));
    printf("students' grades: \n");

    for(int i=0;i<150;i++){
        toplam=0;
        for(int f=0;f<6;f++){
                toplam = toplam + (rand () % 41 + 10);
            }
        sensor[i]=toplam/6;
        toplam=0;
        printf("%.2f\n",sensor[i]);
    }

    printf("\nstatistics:\n");
    printf("Minimum: %.2f\n", min(sensor));
    printf("Maximum: %.2f\n", max(sensor));
    printf("Average: %.2f\n", ortalama(sensor));
    printf("Standard deviation: %.2f\n", std(sensor));
    printf("\n\nHistogram:\n");
    float ortHistogram= ortalama(sensor);
    float stdHistogram= std(sensor);

    for(int i=0;i<8;i++){
        for(int r=0;r<150;r++){
            if((sensor[r])>=(ortHistogram+((i-4)*stdHistogram)) && (sensor[r])<(ortHistogram+((i-3)*stdHistogram))){
                histogram[i]++;
            }
        }
        printf("%3d  ",histogram[i]);
        for(int p=0;p<histogram[i];p++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
