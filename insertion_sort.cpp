#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    /**
     * first we have to set the key and the index below it one step
     * i = key && j = i - 1
     */

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        /**
         * then after setting it, we have to make a loop to compare the key with it's first index number
         * condition: j != 0 and not negative (j >= 0) && arr[j] > arr[i]
         */

        while (key < arr[j] && j >= 0)
        {
            /**
             * swap the arr[j] and key
             */
            arr[j + 1] = arr[j];
            j--;
        }
        // now add the key to the j place
        arr[j + 1] = key;
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
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}