#include<stdio.h>

int main(){

double a,b;
    printf("Give some value to a and b respectively: ");
    scanf("%lf %lf", &a, &b);
    printf("a + b = %lf\n", a + b);
    printf("a - b = %lf\n", a - b);
    printf("a ^ 2 = %lf\n", a * a);

int x, y;
    printf("Give some values to x and y:");
    scanf("%d %d", &x, &y);
    printf("x + y  = %d\n", x + y);
    printf("x * y = %d\n", x * y);

char c1, c2;
    getchar();
    scanf("%c %c", &c1, &c2);
    printf("As chars: c1 + c2 = %c\n", c1 + c2);
    printf("As decimal values: c1 + c2 = %d\n ", c1 +c2);
    printf("As chars: c1 * c2 = %c\n", c1 * c2);
    printf("As decimal values: c1 * c2 = %d\n ", c1 * c2);


}