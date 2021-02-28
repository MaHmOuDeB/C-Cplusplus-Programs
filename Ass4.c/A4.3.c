#include<stdio.h>
#include<string.h>
#include<math.h>
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float sum(float arr[], int num);
float lowest(float arr[], int num);

int main(){

    float n[15];
    char c;
    int count = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &n[i]);

            if (n[i] < 0)
            {
                n[i] = 0;
                break;
            }
            
    count ++;
    }
    printf("Number of elements in the array: %d\n\n", count);

    
    printf("Choose a cahracter: ");
    getchar();
    scanf("%c", &c);

    switch ( c )
    {
    case 'm':
    //Geometric sum
printf("The geometric mean of the elements of the array is : %.3f \n\n", geometric_mean(n, count));

        break;
    
    case 'h':
    //highest number
printf("The highest number of the array is %.2f\n\n", highest(n,count));

        break;
    
    case 'l':
    //smallest number
printf("The lowest number of the array is %.2f\n\n", lowest(n, count) );

        break;

    case's':
    //sum of all the elements 
printf("The sum of all numbers in the array is %.2f\n\n", sum(n, count));
        break;

    
    }



    return 0;
}

float geometric_mean(float arr[], int num){
    float g_mean = 1;

        for (int i = 0; i < num; i++)
{
    g_mean *= arr[i];
}

g_mean = pow(g_mean, (1.0/num));


    return g_mean;
}




float highest(float arr[], int num){

    float high = 0;

        for (int i = 0; i < num; i++)
        {
            if (arr[i] > high)
            {
                high  = arr[i];
            }
            
        }
        

    return high;
}





float lowest(float arr[], int num){
    float low = 1000;

        for (int i = 0; i < num; i++)
        {
            if (arr[i] < low)
            {
                low = arr[i];
            }
            
        }

    return low;
}

float sum(float arr[], int num){

    float sum = 0;

        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
        }
        

    return sum;

}