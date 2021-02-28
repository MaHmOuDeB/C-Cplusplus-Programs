#include<stdio.h>

int main(){

int number;
    printf("Give the variable a value: ");
    scanf("%d", &number);

        if ((number % 2 == 0) && (number % 7 == 0) )
    {
            printf("The number is divisible by 2 and 7\n");

    }

        else
        {
            printf("Number is not divisible by 2 and 7\n ");
        }

return 0;        

}