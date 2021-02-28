#include<stdio.h>
#include<stdlib.h>
void divby5(float arr[], int size);

int main(){

    float *arr;
    int size;

    printf("Number of elements in the array: ");
    scanf("%d", &size);

    arr = (float*) malloc(sizeof(float) *size);

        if (arr == NULL)
    {
        printf("Dynamic allocation failed!\n");
        exit(1);
    }

    printf("Print the elements in the array:\n");

        for (int i = 0; i < size; i++)
    {
        scanf("%f", &arr[i]);

    }

    printf("All elements of the array:\n");

        for (int i = 0; i < size; i++)
        {
            printf("%.3f\n", arr[i]);
        }

    printf("\n\n");
        
    divby5(arr, size);


    
return 0;

}

void divby5(float arr[], int size){

for (int i = 0; i < size; i++)
{
    arr[i] = arr[i] / 5;
}

printf("New values of the array: \n");

for (int i = 0; i < size; i++)
{
    printf("%.3f\n", arr[i] );
}



}