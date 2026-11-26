#include <stdio.h>

#define SIZE 10

int recursiveMaximum(const int array[], int size);

int main(void)
{
    int a[SIZE] = {24, 8, 91, 3, 47, 15, 62, 99, 12, 5};
    int maxVal;

    maxVal = recursiveMaximum(a, SIZE);

    printf("Maximum value is %d\n", maxVal);

    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    int maxRest;

    if (size == 1)
    {
        return array[0];
    }

    maxRest = recursiveMaximum(array, size - 1);

    return (array[size - 1] > maxRest) ? array[size - 1] : maxRest;
}
