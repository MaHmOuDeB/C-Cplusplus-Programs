#include<stdio.h>

int main(){
int x = 17, y = 4;
int sum = x + y;
int product = x * y;
int difference = x - y;
float div = (float)x / y;
float rem = x % y;
printf("x = %d\n", x);
printf("y = %d\n", y);
printf("sum = %d\n", sum);
printf("product = %d\n", product);
printf("Difference = %d\n",difference);
printf("Division= %.7f\n", div  );
printf("remainder of division = %.1f\n", rem);


return 0;

}