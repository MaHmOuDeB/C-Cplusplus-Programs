#include<stdio.h>
#include <stdlib.h>

#define SWAP(A,B,INTER){ INTER = A;\
                         A = B;\
                         B = inter;\
                         printf(#A " = %d\n", A);\
                         printf(#B " = %d\n", B);}

#define SWAP1(A,B,INTER){ INTER = A;\
                         A = B;\
                         B = inter;\
                         printf(#A " = %.6lf\n", A);\
                         printf(#B " = %.6lf\n", B);}


int main(){

int x, y;
double a, b;
double inter;

printf("Read from the keayboard these variables:\n");
scanf("%d %d %lf %lf", &x, &y, &a, &b);
SWAP(x,y,inter);
SWAP1(a,b,inter);

}