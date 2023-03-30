#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int grades[2][5];
  float min, max;
  int i;
  int j;

  grades[0][0] = 80;
  grades[0][1] = 70;
  grades[0][2] = 65;
  grades[0][3] = 89;
  grades[0][4] = 90;

  grades[1][0] = 85;
  grades[1][1] = 80;
  grades[1][2] = 80;
  grades[1][3] = 82;
  grades[1][4] = 87;

  for (i = 0; i < 2 ; i++) {
    min = grades[i][0];
    max = grades[i][0];
    for (j = 1; j < 5 ; j++) {
         if (grades[i][j] > max)
            max = grades[i][j];
        if (grades[i][j] < min)
            min = grades[i][j];            
    }

    printf("The minimum grade in subject %d is: %.2f\n", i, min);
    printf("The maximum grade in subject %d is: %.2f\n", i, max);
  }

  return 0;
}
