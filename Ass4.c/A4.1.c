#include<stdio.h>
#include<math.h>

int main(){

    double start, end, incr;

    scanf("%lf %lf %lf", &start, &end, &incr);
    printf("\n\n");

    for (double i = start; i <= end; i += incr)
    {
       printf("%.6lf %.6lf %.6lf \n", i, i*i*M_PI, 2 * i *M_PI );
    }
    
return 0;

}