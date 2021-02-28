#include<stdio.h>
#include<stdlib.h>
int prodminmax(int n, int arr[]);

int main(){

    int n, *arr;

    printf("Number of elements in the array: ");
    scanf("%d", &n);
    printf("\n");

    arr = (int*) malloc(sizeof(int) * n);

    if(arr == NULL){

        exit(1);
    }

    printf("Pass the arrays values: \n");
        for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    printf("The product of the min and max value is: %d\n", prodminmax(n, arr));

    free(arr);

    return 0;
    
}

int prodminmax(int n, int arr[]){

int min = arr[0], max = arr[0];

for (int i = 0; i < n; i++)
{
    if (max < arr[i])
    {
        max = arr [i];
    }

    if (min > arr[i])
    {
       min = arr[i];
    }

    
    
    
}

return min * max;

}
