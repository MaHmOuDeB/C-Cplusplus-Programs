#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    printf("The value of the variable a: %d\n", a );
    int* ptr_a;
    ptr_a = &a;
    printf("Adress of the variable a: %p\n", ptr_a);
    *ptr_a += 5;
    printf("The new value of a is %d\n", *ptr_a);
    printf("Adress of the variable a: %p\n", ptr_a);

return 0;

}