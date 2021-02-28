#include<stdio.h>
#define BIN(CHAR, X){ X = (CHAR & 1) ? (1) : (0);\
                      printf("The least significant bit is : %d\n", X);\
                      printf("The decimal representation is: %d\n", CHAR);}


int main(){

    unsigned char c;
    int bin;
    printf("Read a character from the keyboard:\n");
    scanf("%c", &c);

    BIN(c,bin);

    return 0;
}