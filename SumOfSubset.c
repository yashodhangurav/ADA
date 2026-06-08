// // // find subset with given sum using recursion

// // #include<stdio.h>

// // int w[10], x[10], d, count = 0;

// // void subset(int sum, int k, int n){
// //     if(sum == d){
// //         printf("Subset %d: ", ++count);

// //         for(int i = 0; i<n; i++){
// //             if(x[i] == 1){
// //                 printf("%d ", w[i]);
// //             }
// //         }
// //         printf("\n");
// //         return;
// //     }

// //     for(int i = k; i<n; i++){
// //         if(sum + w[i] <= d){
// //             x[i] = 1;                     // FIXED
// //             subset(sum + w[i], i + 1, n);
// //             x[i] = 0;
// //         }
// //     }
// // }

// // int main(){
// //     int n;

// //     printf("Enter number of elements: ");
// //     scanf("%d", &n);

// //     printf("Enter elements: ");
// //     for(int i = 0; i<n; i++){
// //         scanf("%d", &w[i]);
// //     }

// //     printf("Enter required sum: ");
// //     scanf("%d", &d);

// //     subset(0, 0, n);

// //     if(count == 0){
// //         printf("No subset found");
// //     }

// //     return 0;
// // }




// // -------------------------------------------PRACTICE---------------------------



// #include<stdio.h>

// int w[10], x[10], d, count = 0;

// void subset(int sum, int k, int n){
//     if(sum == d){
//         printf("subset %d: ", ++count);
        
//         for(int i = 0; i<n; i++){
//             if(x[i]==1){
//                 printf("%d", w[i]);
//             }
//         }
//         printf("\n");
//     }
    
//     for(int i = k; i<n; i++){
//         if(sum+w[i]<=d){
//             x[i] = 1;
//             subset(sum+w[i], i+1, n);
//             x[i] = 0;        }
//     }
    
// }


// int main(){
//     int n;
//     printf("Enter the number of the elements:");
//     scanf("%d", &n);
    
//     printf("Enter the elememts: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &w[i]);
//     }
//     printf("Enter the required sum: ");
//     scanf("%d", &d);
    
//     subset(0,0,n);
//     if(count == 0){
//         printf("No cubset");
        
//     }

//     return 0;
    
// }


// ----------------------------------------------------------practice



