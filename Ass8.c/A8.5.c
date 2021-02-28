#include<stdio.h>
#include<stdlib.h>

int main(){

    char c, c1;
  FILE* fptr = fopen("chars.txt", "r");
    if(fptr == NULL){
        printf("Error");
        exit(1);
    }

  //c = getc(fptr);
  //c1 = getc(fptr);

  fseek(fptr, 0, SEEK_SET); // setting the pointer in the first character
  c = getc(fptr);

  fseek(fptr, 1 , SEEK_SET);
  c1 = getc(fptr);

  FILE* fptr1 = fopen("codesum.txt", "w");
    if(fptr1 == NULL){
        printf("Error 1");
        exit(1);
    }

int sum = c + c1;

fprintf(fptr1, "SUM : %d", sum);



return 0;

}