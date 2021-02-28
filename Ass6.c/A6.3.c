#include<stdio.h>
#define Mid_range(A, B, C, MIN, MAX) {MAX = A;\
                                      MAX = (MAX > B) ? (A) : (B);\
                                      MAX = (MAX > C) ? (MAX) : (C);\
                                      MIN = A;\
                                      MIN = (MIN < B) ? (A) : (B);\
                                      MIN = (MIN < C) ? (MIN) : (C);\
                                      printf("THE MID RANGE IS %.2f \n", (MIN + MAX) / 2 );}

int main(){

    int a, b, c;
    float min,max;
    printf("enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    Mid_range(a, b, c, min, max);

    return 0;

}


    