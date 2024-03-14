#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    /**
     * actually set the current to the min index
     * then we will compare the min index with the following
     */
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // swap number at min to the following num
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void select(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min = step;

        for (int i = step + 1; i < size; i++)
        {
            if (arr[min] > arr[i])
            {
                min = i;
            }
        }

        int tmp = arr[min];
        arr[min] = arr[step];
        arr[step] = tmp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{

    int arr[] = {9, 5, 1, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    select(arr, size);
    printArray(arr, size);
}

