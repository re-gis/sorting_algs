#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            /**
             *  here the element is greater than the pivot so the pointer will go to the next element
             * to mean the pointer of greater element (i)++
             */
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    // swap the pivot with great element
    int tmp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = tmp;

    return (i + 1);
}

int divide(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    int tmp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = tmp;

    return (i + 1);
}

void sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = divide(arr, low, high);
        sort(arr, low, part - 1);
        sort(arr, part + 1, high);
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    // perform quicksort on data
    sort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
    return 0;
}


