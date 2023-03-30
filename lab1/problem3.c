#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    	double u_arr[3];
    	printf("Enter a number: ");
    	scanf("%lf", &u_arr[0]); 
    	printf("Enter a number: ");
	scanf("%lf", &u_arr[1]);
    	printf("Enter a number: ");
	scanf("%lf", &u_arr[2]);
    	
	double avg = (u_arr[0] + u_arr[1] + u_arr[2]) /3;
    	printf("The array is [%f, %f, %f]\n", u_arr[0], u_arr[1], u_arr[2]);
    	printf("The average of the array values is %f.\n", avg);
}
