#include<stdio.h>


int main(){

int weeks, days, hours;
int T_hours;

printf("Number of weeks, days, and hours respectively: " );
scanf("%d %d %d", &weeks, &days, &hours);

T_hours = weeks * 24 * 7 + days * 24 + hours;

printf("Total number of hours %d\n", T_hours);

return 0;


}