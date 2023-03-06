// Functions insertion sort

////////_______ two way to increasing insertion sort _______////////

void insertionSort_Increase_1(int arr[],int size){
    int current_index, key;
    for (int j = 1; j < size; j++)
    {
        key = arr[j];
        current_index = j - 1;
        while (current_index >= 0 && arr[current_index] > key)
        {
            arr[current_index + 1] = arr[current_index];
            current_index--;
        }
        arr[current_index + 1] = key;
    }
}

void insertionSort_Increase_2(int arr[],int size){
    int key;
    for(int i=1;i<size;i++){
        key=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
                if(j==0)arr[0]=key;
            }
            else{
                arr[j+1]=key; break;
            }
        }
    }
}



////////_______ two way to decreasing insertion sort _______////////

void insertionSort_Decrease_1(int arr[],int size){
    int current_index, key;
    for (int j = 1; j < size; j++)
    {
        key = arr[j];
        current_index = j - 1;
        while (current_index >= 0 && arr[current_index] < key)
        {
            arr[current_index + 1] = arr[current_index];
            current_index--;
        }
        arr[current_index + 1] = key;
    }
}

void insertionSort_Decrease_2(int arr[],int size){
    int key;
    for(int i=1;i<size;i++){
        key=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]<key){
                arr[j+1]=arr[j];
                if(j==0)arr[0]=key;
            }
            else{
                arr[j+1]=key; break;
            }
        }
    }
}
