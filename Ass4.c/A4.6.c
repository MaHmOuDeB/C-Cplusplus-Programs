#include<stdio.h>
#include<stdlib.h>
void greatest(int **ptr, int n);

int main(){

int * ptr;
int num;
scanf("%d", &num);
ptr = (int*) malloc(sizeof(int) * num);

    if (ptr == NULL)
    {
    exit(1);
    }

printf("Enter values in the array: \n");

    for (int i = 0; i < num; i++)
    {
scanf("%d", &ptr[i]);
    }

greatest( &ptr, num);   

}

void greatest(int **ptr, int n){
int big1 = 0, big2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(*ptr + i) > big1)
        {
            big1 = *(*ptr + i);
        }

        if ((*(*ptr + i) > big2) && (big1 > big2 + *(*ptr + i)) )
        {
            big2 = *(*ptr +i);
        }
        
        
    }
    
printf("The greatest two values in this array are %d and %d\n", big1, big2);


}








/*float *ptr;
2int  number;
3...
4ptr = (float*)  malloc(sizeof(float) *number);
5...
6free(ptr)
;*/