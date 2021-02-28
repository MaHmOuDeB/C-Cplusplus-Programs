#include<stdio.h>

double sum25(double v[], int n);

double sum25(double v[], int n){

double sum = 0 ;

if (v[2] < 5)
{
    printf("Position 2 or 5 doesn't exist in the array.\n");
    return -111;
}

else
{
   sum = v[1] + v[4];
   printf("The sum of the numbers in the 2nd and 5th position of the array is %lf\n", sum);
  return sum; 
}


}

int main(){

    double v[20];
    int n;

    scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &v[i]);
        }

printf("\n\n");
sum25(v,n);

return 0;
        
}

