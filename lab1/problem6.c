#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int arr[], int size)
{
    printf("The sorted numbers are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    } 
    printf("\n");
}

// https://www.programiz.com/dsa/counting-sort
void countingSort(int *array, int size, int max) {
  int *output = malloc(size * 4);

  int *count = malloc((max + 1) * 4);

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

int main(int argc, char *argv[])
{
    int n_num;
    int max = 0;
    printf("How many values to sort (< 100)? ");
    scanf("%i", &n_num);
    printf("%i \n", n_num);
    int *arr = malloc(n_num * sizeof(int));
    for (int i = 0; i < n_num; i++)
    {
        printf("Enter a number: ");
        scanf("%i", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    countingSort(arr, n_num, max);
    print_arr(arr, n_num);
    return 0;
}
