#include<stdio.h>

int main(){

    char c ;
    int n;


       printf("Enter a lower case character: ");
//getchar();
scanf("%c", &c);
    
    while ((c < 97 || c > 122)) {
        
        printf("ReEnter a lower case character: ");
        getchar();
        scanf("%c", &c);

    }

printf("Enter an integer: ");
scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%c\n", c - i);
        }
    
    return 0;
}