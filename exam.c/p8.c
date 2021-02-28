#include<stdio.h>

void total(int mins[], int secs[], int n, int *sum_m, int *sum_s){

    for (int i = 0; i < n; i++)
    {
        printf("Enter mins: ");
        scanf("%d", &mins[i]);
        printf("Enter secs:");
        scanf("%d", &secs[i]);

        *sum_m += mins[i];
        *sum_s += secs[i];

        while (*sum_s >= 60)
        {
            *sum_m += 1;
            *sum_s -= 60; 

        }
        
    }

    printf("MIN : %d ||  SECS : %d\n", *sum_m, *sum_s);
    
}


int main(){

    int min[100];
    int sec[100];
    int n;
    int total_m;
    int total_s;

    scanf("%d", &n);
    total(min, sec, n, &total_m, &total_s);


    return 0;

}