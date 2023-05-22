#include <algorithm>

//////////// min heap ////////////
void heapify_minHeap(int array[], int size, int parentIndex) {
    int leftChild = 2 * parentIndex + 1;
    int rightChild = 2 * parentIndex + 2;
    int min=parentIndex;
    if(leftChild<size && array[leftChild]<array[min])min=leftChild;
    if(rightChild<size && array[rightChild] < array[min])min=rightChild;
    if(min != parentIndex){
        std::swap(array[parentIndex],array[min]);
        heapify_minHeap(array,size,min);
    }
}
//////////// max heap ////////////
void heapify_maxHeap(int array[], int size, int parentIndex) {
    int leftChild = 2 * parentIndex + 1;
    int rightChild = 2 * parentIndex + 2;
    int max=parentIndex;
    if(leftChild<size && array[leftChild]>array[max])max=leftChild;
    if(rightChild<size && array[rightChild] > array[max])max=rightChild;
    if(max != parentIndex){
        std::swap(array[parentIndex],array[max]);
        heapify_maxHeap(array,size,max);
    }
}


void buildHeap(int array[],int size){
    for(int i=size/2-1;i>=0;i--){
        heapify_maxHeap(array,size,i);
    }
}


void heapSort(int array[],int size){
    buildHeap(array,size);
    for(int i=size-1;i>=0;i--){
        std::swap(array[0],array[i]);
        heapify_maxHeap(array,i,0); // every time size--
    }
}