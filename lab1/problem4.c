# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[]){

	double arr[3];
	double arr1[3];
	double arr2[6];
	int j = 1;
	int k = 0;

	printf("--------------------------------\nEnter the first array's values\n--------------------------------\n");
	printf("Enter a number: ");
    	scanf("%lf", &arr[0]); 
    	printf("Enter a number: ");
	scanf("%lf", &arr[1]);
    	printf("Enter a number: ");
	scanf("%lf", &arr[2]);
	printf("--------------------------------\nEnter the second array's values\n--------------------------------\n");
	printf("Enter a number: ");
        scanf("%lf", &arr1[0]);   
        printf("Enter a number: ");
        scanf("%lf", &arr1[1]);
        printf("Enter a number: ");
        scanf("%lf", &arr1[2]);

	for (int i = 0; i < 3; i++) {
		arr2[k] = arr[i];
		arr2[j] = arr1[i];
		j+=2;
		k+=2;
		}
	

	printf("The merged array is [%f, %f, %f, %f, %f, %f].\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);
}
