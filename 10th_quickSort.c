// #include<stdio.h>


// int partition(int *arr, int si, int ei){
//     int i = si+1;
//     int j = ei;

//     int pivot = arr[si];

//     while(i<=j){
//         if(pivot > arr[i]){
//             i++;
//         }else if(pivot < arr[j]){
//             j--;
//         }
//         else{
//             int temp = arr[i];
//             arr[i] = arr[j]; 
//             arr[j] = temp;
//         }
//     }
//     int temp = arr[si];
//     arr[si] = arr[j];
//     arr[j] = temp;

//     return j;
// }

// void quickSort(int *arr, int si, int ei){
//     if(si>=ei) return;

//     int partitionIdx = partition(arr,si,ei);

//     quickSort(arr,si,partitionIdx-1);
//     quickSort(arr,partitionIdx+1,ei);
// }



// // print
// void printArr(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int arr[] = {5,7,4,1,6,2};
//     int n = sizeof(arr)/sizeof(int);

//     quickSort(arr,0,n-1);
//     printArr(arr,n);
//     return 0;
// }



// ----------------------------------------practice----------------------------



#include<stdio.h>

int partition(int *arr, int si,int ei){
    int i = si+1;
    int j = ei;

    int pivot = arr[si];

    while(i<=j){
        if(pivot>arr[i]){
            i++;
        }else if(pivot<arr[j]){
            j--;
        }else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[si];
    arr[si] = arr[j];
    arr[j] = temp;


    return j;
}

void quickSort(int *arr, int si, int ei){
    if(si>=ei){
        return;
    }

    int partitionIdx = partition(arr,si,ei);

    quickSort(arr,si,partitionIdx-1);
    quickSort(arr,partitionIdx+1,ei);
}


void printfn(int *arr, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {5,7,1,3,9,4};
    int n = sizeof(arr)/sizeof(int);

    quickSort(arr, 0, n-1);
    printfn(arr,n);

    return 0;
}