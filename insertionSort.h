

// Function insertion sort
void insertionSort(int arr[],int size){
    int tmp;
    for(int i=1;i<size;i++){
        tmp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>tmp){
                arr[j+1]=arr[j];
                if(j==0)arr[0]=tmp;
            }
            else{
                arr[j+1]=tmp; break;
            }
        }
    }
}

/*
 int main() {

    int arr[8]={9,2,7,5,1,4,3,6};
    insertionSort(arr,8);
    for(int i=0;i<8;i++)cout<<arr[i]<<' ';

    return 0;
}
 */