#include<stdio.h>

void print_form(int n, int m, char c);

int main(){

    int n, m;
    char c;

scanf("%d %d %c", &n, &m, &c);
printf("\n\n");
print_form( n,  m,  c);

return 0;
}

void print_form(int n, int m, char c){


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", c);
        }
     printf("\n");
     m++;

        
    }
    
    
}
