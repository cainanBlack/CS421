#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double arr[5] = {5, 8, 10, 13, 19};
    double sum;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("The array is [%f, %f, %f, %f, %f]\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    printf("The sum of the array is %f\n", sum);
}
