#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(sizeof(int) *n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);

    }

    FILE* fptr;
    fptr = fopen("squares.txt", "w");
        for (int i = n - 1 ; i >= 0; i--)
        {
            fprintf(fptr,"%d  %d\n",ptr[i], ptr[i] * ptr[i] );
        }
        
    
}


        
        

