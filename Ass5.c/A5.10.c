#include<stdio.h>
#include<stdlib.h>
int factorial(int n);


int main(){

    int n;

    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("All the numbers are:\n");
     factorial(n);

}

int factorial(int n){

 int x = n;
    if (x == 0)
    {
        return 1;
    }

    else
    {
        x = n ;
         printf("%d\n", x);
        x = factorial(n-1);
       
return x;
    }    

    
}