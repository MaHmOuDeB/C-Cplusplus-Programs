#include<stdio.h>
#include<stdlib.h>
float scalar_p(double *v, double *w, int n);
void arr(double *arr, int n);



int main(){

    int n;
    double *v, *w;

    printf("Number of elements in the vectors: ");
    scanf("%d", &n);

    v = (double*) malloc(sizeof(double) *n);
    if (v == NULL)
    {
        printf("DYNAMIC ALLOC FAILED");
        exit(1);
    }

    
    w = (double*) malloc(sizeof(double) *n);
    if (w == NULL)
    {
        printf("DYNAMIC ALLOC FAILED");
        exit(1);
    }
    
    printf("V vector:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &v[i]);
        }

    printf("W vector:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &w[i]);
        }

        printf("Scalar product of those arrays %.2lf \n\n", scalar_p( v, w, n) );
        arr(v, n);
        arr(w, n);
        
        //Function for scalar product
        //smallest components of v(popsition)
        //largest components of v (position)
        //smallest components of w(popsition)
        //largest components of w (position)

    return 0;
}

float scalar_p(double *v, double *w, int n){

    int product = 0;
    

        for (int i = 0; i < n; i++)
    {
       product += v[i] * w[i]; 
    }

return product;
}



void arr(double *arr, int n){

double small = arr[0];
double large = arr[0];
double position_s = 0;
double position_l = 0;

    for (int i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            position_s = i;

        }

        if (large < arr[i])
        {
            large = arr[i];
            position_l = i;
        }  
    }

printf("The largest component of this array is %.2lf \n", large);
printf("Its position: %.1lf\n", position_l);
printf("The smallest component of this array is %.2lf \n", small );
printf("Its position: %.1lf\n", position_s);
printf("\n\n");

}



