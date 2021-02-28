#include<stdio.h>
#include<stdlib.h>

int main(){

int n;
int *ptr;

scanf("%d", &n);
ptr = (int*) malloc(sizeof(int) * n);

for (int i = 0; i < n; i++)
{
    scanf("%d", &ptr[i]);
}

for (int i = n - 1; i >= 0; i--)
{
    printf("%d  §   %d\n", ptr[i], ptr[i] * ptr[i]);
}


    
    return 0;
}