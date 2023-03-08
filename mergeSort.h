
void merge(int array[], int left, int mid, int right) {
    int sizeOfLeftArray = (mid - left) + 1; // first array from begin to mid
    int sizeOfRightArray = right - mid;       // second array from (mid + 1) to end
    int *leftArray = new int[sizeOfLeftArray];
    int *rightArray = new int[sizeOfRightArray];

    for (int i = 0; i < sizeOfLeftArray; i++) { // fill left array
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < sizeOfRightArray; j++) { // fill right array
        rightArray[j] = array[mid + 1 + j];
    }

    int indexLeftArray = 0, indexRightArray = 0, indexMergeArray = left;
    while ((indexLeftArray < sizeOfLeftArray) && (indexRightArray < sizeOfRightArray)) {
        if (leftArray[indexLeftArray] < rightArray[indexRightArray]) { // if I want to sort Decreasing ... swap ( < ) with ( > )
            array[indexMergeArray] = leftArray[indexLeftArray];
            indexLeftArray++;
        } else {
            array[indexMergeArray] = rightArray[indexRightArray];
            indexRightArray++;
        }

        indexMergeArray++; // في الحالتين هضيف عنصر جديد لل merge array
                          // ف هزود الاندكس بتاعها

    } // end while

    // لو (sizeOfLeftArray = sizeOfRightArray)
    // يبقى الفانكشن بتاعتي يعتبر خلصت لحد هنا كدا

    while (indexLeftArray < sizeOfLeftArray) { // if sizeOfLeftArray > sizeOfRightArray
        array[indexMergeArray] = leftArray[indexLeftArray];
        indexLeftArray++;
        indexMergeArray++;
    }
    while (indexRightArray < sizeOfRightArray) { // if sizeOfRightArray > sizeOfLeftArray
        array[indexMergeArray] = rightArray[indexRightArray];
        indexRightArray++;
        indexMergeArray++;
    }

}

void mergeSort(int array[], int begin, int end) {
    if (begin >= end) { // base case (الحاله اللي الفانكشن هتوقف فيها)
        return;
    }
    int mid = (begin + end) / 2;
    mergeSort(array, begin, mid);// divide left array
    mergeSort(array, mid + 1, end); // divide right array
    merge(array, begin, mid, end);
}



