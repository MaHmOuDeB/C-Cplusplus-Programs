#include<stdio.h>

int main(){

    char c;
    scanf("%c", &c);

    if ((c >= 0 && c <= 47)  || (c >= 58 && c <= 64 ) || (c >= 91 && c <= 96) || (c >= 124 && c<= 127))
{
    printf("This cahracter is a symbol\n");

}

else if (c >= 48 && c <= 57)
{
    printf("This character is a number\n");
}

else if ((c >= 65 && c<=90) ||(c >= 97 && c <= 122))
{
    printf("This character is a letter\n");
}

return 0;
}