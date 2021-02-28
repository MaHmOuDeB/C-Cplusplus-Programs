/*#include<stdio.h>
float sum(float numbers[10]);
float average( float numbers[10]);



int main(){

    
    float numbers[10];

printf("Enter some numbers: ");

for (int i = 0; i < 10; i++)
    {
    scanf("%f", &numbers[i]);

if (numbers[i] == -99.0)
{
    break;
}
    }
    printf("\n\n");
    printf("The sum of all the numbers in the array: %f \n",sum(numbers));

    printf("The average of all the numbers entered is %f \n", average(numbers));
return 0;
}

float sum(float numbers[10]){

    float sum = 0;

for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }

sum = sum -99.0;

return sum;
}

float average( float numbers[10]){

    int counter = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] != 0.00)
        {
            counter++;
        }
        
    }

average = sum(numbers) / (float)counter;

return average;

}
*/




#include <stdio.h>
 
int n;
 
float sum(float numbers[n])
{
float s;
    for (int i=0; i<n; i++)
    {
        s = numbers[i] + s;
       
    }

   
printf("the sum of all the numbers is= %f \n", s + 99.0);
 
    return s + 99.0;
}
 
float average( float numbers[n])
{
 
    float avrg;
 
    avrg=sum(numbers)/(float)n;
 
printf("the average of all the numbers is=%f\n",avrg);


return avrg;
}
 
int main ()
{
    printf("enter n:");
    scanf("%d",&n);
    float numbers[n];
 
    for (int i=0; i<n;i++)
    {
        scanf("%f",&numbers[i]);
        if (numbers[i]== -99.0)
        {
            break;
        }
 
 
    }

    printf("\n\n");
sum(numbers);
//average(numbers);
//void sum( float numbers[n]);
return 0;
}