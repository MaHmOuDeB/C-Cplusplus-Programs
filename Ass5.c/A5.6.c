#include<stdio.h>
#include<stdlib.h>

int main(){

int n;
float *arr;
int position = 0;

printf("How many elements do you want to have in the array: ");
scanf("%d", &n);

arr = (float*) malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
{
    scanf("%f", &arr[i]);
}

    for (int i = 0; i < n; i++)
    {
        if (*(arr +i) < 0 )
        {
            position = i ;
            break;
        }
        
        
    }

printf("The number of elements before the first negative value is %d\n", n - position);
    
return 0;

}