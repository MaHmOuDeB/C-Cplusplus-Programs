#include<stdio.h>
#include<math.h> 
void proddivpowinv(float a, float b, float*prod, float*div,float*pwr, float*invb);
int main(){

    float a, b;
    float prod, div, pwr, invb;
printf("Give values to a and b respectively:");
scanf(" %f %f", &a, &b );
printf("\n");

proddivpowinv(a, b, &prod, &div, &pwr, &invb);
printf("Product value: %.2f\n", prod);
printf("div value: %.2f\n", div);
printf("Power value: %.2f \n", pwr);
printf("Product value: %.2f\n", invb);





return 0;
}

void proddivpowinv(float a, float b, float*prod, float*div,float*pwr, float*invb){

*prod = a * b;
*div = a / b;
*pwr = pow(a, b);
*invb = a / b;

return ;

}