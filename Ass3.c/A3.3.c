#include<stdio.h>

float convert (int cm){

        float Km;
    printf("Enter a measurement in cm: ");
    scanf("%d", &cm);
Km = cm * 0.00001;
printf("The result of the convertion is: %.6f\n", Km);

    return Km;
}

int main(){

int cm = 0;

convert (cm);

return 0;

}