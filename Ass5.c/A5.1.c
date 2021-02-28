#include<stdio.h>
#include<stdlib.h>
void triangle(int n, char ch);


int main(){

    int n;
    char ch;

    printf("How many columns and max rows do you want: ");
    scanf("%d", &n);

    printf("Enter a character:");
    getchar();
    scanf("%c", &ch);

    triangle(n, ch);

    return 0;
}
void triangle(int n, char ch){

    int count = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n - count; j++)
    {
        printf("%c", ch);
    }
    printf("\n");
    count++;
}


}
