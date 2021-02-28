#include<stdio.h>

int main(){

int x, y;
int* ptr_one, *ptr_two, *ptr_three;
ptr_one = &x;
ptr_two = &x;
ptr_three = &y;

printf("Adress of ptr_one: %p\n", ptr_one);
printf("Adress of ptr_two: %p\n", ptr_two);
printf("Adress of ptr_three: %p\n", ptr_three);

return 0;




}