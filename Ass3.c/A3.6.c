#include<stdio.h>



float to_pounds(int kg, int g);

float to_pounds(int kg, int g){

float p;

p = 2.2 * kg + 0.001 * 2.2 * g;


return p;
}

int main(){

int Kg, g;

printf("The weight of the object in Kg and g respectively: ");
scanf( "%d %d", &Kg, &g);

printf("\n\n");    
printf("Conversion to pounds: %.6f\n",to_pounds(Kg, g));

return 0;

}