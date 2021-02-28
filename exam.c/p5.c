#include <stdio.h>
#include<stdbool.h>



bool odd(unsigned char data){
    
    return data & 1;
}


int main(){

   printf("a : %d\n",  odd('a'));


    return 0;
}