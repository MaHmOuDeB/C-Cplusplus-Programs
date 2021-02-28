#include<stdio.h>

int main(){

    char c;
    int n;
    double temperature[100];
    double sum = 0;
    double fahr[100];
    double mean;


printf("Enter a character: ");
scanf("%c", &c);

printf("Enter an integer: ");
scanf("%d", &n);

    for (int i = 0; i <n ; i++)
    {
        printf("Enter the temperatures:");
        scanf("%lf", &temperature[i]);

    }
    
printf("\n\n");

    switch (c)
{
case 's':

printf("Here is the sum of all the temperatures: ");
for (int i = 0; i < n; i++)
{
    sum += temperature[i];
}

printf("%.4lf \n", sum);

    break;


case 'p':
printf("The list of all temperatures: \n");

for (int i = 0; i < n; i++)
{
    printf("%.4lf\n", temperature[i]);
}

case 't':
for (int i = 0; i < n; i++)
{
        fahr[i] = 9/5 * temperature[i] + 32;
    printf("Temperature in fahrenheit %.4lf\n", fahr[i] );

}




default :
printf("The arithmetic mean of all temperatures: ");

    for (int i = 0; i < n; i++)
{
    sum += temperature[i];
}

mean = sum / n;
printf("The arithmetic mean is %.4lf\n", mean);



    break;
}



    return 0;
}