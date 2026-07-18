// find the transition closure using warshall algo
// find the transition closure using warshall algo

// #include<stdio.h>


// void warshalls(int a[10][10], int n){
//     int t[10][10];
    
//     for(int  i = 0; i<n; i++){
//         for(int j= 0; j<n; j++){
//             t[i][j] = a[i][j];
//         }
//     }
    
//     for(int k = 0; k<n; k++){
//         for(int i= 0; i<n; i++){
//             for(int j = 0; j<n; j++){
//                 t[i][j] = t[i][j] || (t[i][k] && t[k][j]);
//             }
//         }
//     }
    
//     printf("\n Transition closure is : ");
//     for(int i=0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             printf("%d\t", t[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int a[10][10], n;
    
//     printf("Enter the number of the vertises: ");
//     scanf("%d", &n);
    
//     printf("Enter the adjucency matrix: ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     warshalls(a,n);
    
//     return 0;
// }




// ----------------------------------PRACTICE-----------------------------------


// #include<stdio.h>

// void warshalls(int a[10][10], int n){
//     int t[10][10];

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             t[i][j] = a[i][j];
//         }
//     }


//     for(int k = 0; k<n; k++){
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<n; j++){
//                 t[i][j] = t[i][j] || (t[i][k] && t[k][j]);
//             }
//         }
//     }


//     // print
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             printf("%d\t", t[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int a[10][10], n;

//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix: \n");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     warshalls(a,n);

//     return 0;
// }

// -----------------------------PRACTICE-----------------------------------


#include<stdio.h>


void warshalls(int a[10][10], int n){
    int t[10][10];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            t[i][j] = a[i][j];
        }
    }

    for(int k = 0; k<n; k++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                t[i][j] = t[i][j] || (t[i][k] && t[k][j]);
            }
        }
    }


    for(int i = 0; i<n; i++){
        for(int j= 0; j<n; j++){
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}
int main(){

    int a[10][10], n;

    printf("Enter the number of the vertices : ");
    scanf("%d", &n);

    printf("Enter the adjucency matrix  : ");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    warshalls(a,n);


    return 0;
}