#include<stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float*p);
void modifybyref(float*a, float*b);


int main(){

float f1,f2, p = 0 ;
scanf("%f %f", &f1,&f2);


printf("the product of two floats (By value) %.2f\n\n", product( f1, f2) );

productbyref(f1, f2, &p);
printf("the product of two floats (By reference) %.2f\n\n", p );

modifybyref(&f1, &f2);
printf("The modified values are %.2f %.2f\n\n", f1, f1);



return 0;
}

float product(float a, float b){

    float product = a * b;

    return product;
}

void productbyref(float a, float b, float*p){

*p = a * b;

}

void modifybyref(float*a, float*b){

    *a += 3;
    *b += 11;
}
