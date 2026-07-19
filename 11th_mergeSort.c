// #include<stdio.h>


// void merge(int *arr, int si, int mid, int ei){
//         int i = si;
//         int j = mid+1;
//         int k = 0;
//         int temp[100];

//         while(i<=mid && j<=ei){
//             if(arr[i]<=arr[j]){
//                 temp[k++] = arr[i++];
//             }else{
//                 temp[k++] = arr[j++];
//             }
//         }

//         while(i<=mid){
//             temp[k++] = arr[i++]; 
//         }
//         while(j<=ei){
//             temp[k++] = arr[j++];
//         }


//         // copying
//         for(int i = si, k = 0; i<=ei; i++,k++){
//             arr[i] = temp[k];
//         }
// }


// void mergeSort(int *arr, int si, int ei){
//     if(si>=ei){
//         return;
//     }

//     int mid = si + (ei-si)/2;

//     mergeSort(arr,si,mid);             //leftaHalf
//     mergeSort(arr, mid+1, ei);        //righthalf


//     merge(arr, si, mid, ei);
// }



// void printfn(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int arr[] = {5,1,7,4,9,6,2};
//     int n = sizeof(arr)/sizeof(int);


//     mergeSort(arr,0, n-1);
//     printfn(arr,n);
//     return 0;
// }





// -------------------------------------practice--------------------------

#include<stdio.h>



void merge(int arr[], int si , int mid, int ei){
    int i = si;
    int j = mid+1;
    int k = 0;
    int temp[100];

    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=ei){
        temp[k++] = arr[j++];
    }

    for(int i = si, k = 0; i<=ei; i++,k++){
        arr[i] = temp[k];
    }
}


void mergeSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid = si + (ei - si)/2;

    mergeSort(arr, si , mid);
    mergeSort(arr, mid+1, ei);

    merge(arr, si, mid, ei);
}


void print(int *arr, int n){
    for(int i = 0; i<n; i++){
        printf("%d, ", arr[i]);
    }
}

int main(){

    int arr[] = {5,3,2,6,8};
    int n = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, n-1);
    print(arr, n);

    return 0;
}