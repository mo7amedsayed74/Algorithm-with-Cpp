#include <algorithm> // to use swap function

void quickSort(int array[], int left, int right);// function prototype
int Partition(int array[], int left, int right);

void quickSort(int array[], int size) { /// This is the function that I call in the main function
    quickSort(array, 0, size - 1);
}

void quickSort(int array[], int left, int right) {
    if (left >= right)return; // base case

    int pivotIndex = Partition(array, left, right);
    quickSort(array, left, pivotIndex - 1); // left array
    quickSort(array, pivotIndex + 1, right); // right array
}

int Partition(int array[], int left, int right) { // 2 6 7 4 9 0 4
    int pivot = array[right], curIndex = left; // pivot = 4
    for (int i = left; i < right; i++) {
        if (array[i] <= pivot) {
            std::swap(array[i], array[curIndex]);
            curIndex++;
        }
    }
    std::swap(array[right], array[curIndex]); // swap between (pivot) and (array[curIndex])

    return curIndex; // curIndex is pivotIndex
}