#include <stdio.h>

#define SIZE 15

int binarySearch(const int b[], int low, int high, int searchKey);

int main(void)
{
    int a[SIZE];
    int i;
    int key;
    int result;

    for (i = 0; i < SIZE; i++)
    {
        a[i] = 2 * i;
    }

    printf("Enter a number between 0 and 28: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, SIZE - 1, key);

    if (result != -1)
    {
        printf("Found value at subscript %d\n", result);
    }
    else
    {
        printf("Value not found\n");
    }

    return 0;
}

int binarySearch(const int b[], int low, int high, int searchKey)
{
    int middle;

    if (low > high)
    {
        return -1;
    }

    middle = (low + high) / 2;

    if (searchKey == b[middle])
    {
        return middle;
    }
    else if (searchKey < b[middle])
    {
        return binarySearch(b, low, middle - 1, searchKey);
    }
    else
    {
        return binarySearch(b, middle + 1, high, searchKey);
    }
}
