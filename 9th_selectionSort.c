// #include<stdio.h>

// void selectionSort(int *arr, int n){

//     for(int i = 0; i<n-1; i++){
//         int minIdx = i;
//         for(int j = i+1; j<n; j++){
//             if(arr[j]<arr[minIdx]){
//                minIdx = j; 
//             }
//         }
//         // swap
//         int temp = arr[i];
//         arr[i] = arr[minIdx];
//         arr[minIdx] = temp;
//     }
// }

// void printArr(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main(){

//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr)/sizeof(int);

//     selectionSort(arr,n);
//     printf("Sorted array: ");
//     printArr(arr, n);

//     return 0;
// }



//----------------------------------------------------practice


#include<stdio.h>


void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }



    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int arr[] = {2,7,4,6,8,1};
    int n = sizeof(arr)/sizeof(int);


    selectionSort(arr, n);


    return 0;
}