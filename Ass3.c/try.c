/*#include<stdio.h>

int  main() {
    char  a_string [] = "This is a string \0";
    char *p;
    int  count = 0;
    printf("The  string: %s\n", a_string);
    for (p = &a_string [0]; *p != '\0'; p++)
    count ++;
    printf("The  string  has %d chars .\n", count);
    p--;
    printf("Printing  the  reverse  string: ");
    while (count > 0) {
        printf("%c", *p);
    p--;
    count --;
    }
    printf("\n");
    return 0;
    }*/

    #include  <stdio.h>
    #include  <stdlib.h>

    void  strange_function(int v[], int  dim) {
        
        int i;
        for (i = 0; i < dim; i++)
        v[i] = 287;
        // v = (int *)  malloc(sizeof(int) * 1000);
        }
        
        int  main() {
            
            int  array[] = {1, 2, 9, 16};
            int *p = &array [0];
            strange_function(array , 4);
            printf("%d %p %p\n", array[0], p, array);
            return 0;
            }