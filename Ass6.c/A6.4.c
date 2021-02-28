#include<stdio.h>
#include<stdlib.h>
#define SHOW

int main(){

    int *x, *y, *prod;
    int n, scalar_p = 0;

    printf("What are the dimensions of the vectors:\n");
    scanf("%d", &n);

    x = (int *) malloc(sizeof(int) * n);
    y = (int *) malloc(sizeof(int) * n);
    prod = (int *) malloc(sizeof(int) * n);


        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &y[i]);
        }
        

        for (int i = 0; i < n; i++)
        {
            prod[i] = x[i] * y[i];
            scalar_p += prod[i];
        }

    #ifdef SHOW   
        {
    printf("The intermidiate product values are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", prod[i]);
        }
        }
    #endif

    printf("The scalar product is: %d\n", scalar_p);

return 0;
    }
        

