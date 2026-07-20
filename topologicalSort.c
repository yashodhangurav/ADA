// #include<stdio.h>

// int main(){

//     int n, a[10][10], indegree[10] = {0};
//     int stack[10], top = -1;
//     int topo[10], k = 0;

//     printf("Enter the number of the vertices : ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix : ");
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Correct indegree calculation
//     for(int j = 0; j < n; j++){
//         for(int i = 0; i < n; i++){
//             indegree[j] += a[i][j];
//         }
//     }

//     // Push vertices with indegree 0 into stack
//     for(int i = 0; i < n; i++){
//         if(indegree[i] == 0){
//             stack[++top] = i;
//         }
//     }

//     // Topological sorting
//     while(top != -1){
//         int u = stack[top--];
//         topo[k++] = u;

//         for(int i = 0; i < n; i++){
//             if(a[u][i] == 1){
//                 indegree[i]--;

//                 if(indegree[i] == 0){
//                     stack[++top] = i;
//                 }
//             }
//         }
//     }

//     printf("Topological order : ");
//     for(int i = 0; i < k; i++){
//         printf("%d\t", topo[i]);
//     }

//     return 0;
// }



// --------------------------------------------------practice---------------------------------


// #include<stdio.h>

// int main(){

//     int n, a[10][10], indegree[10] = {0};
//     int stack[10], top = -1;
//     int topo[10], k = 0;


//     printf("enter the number of vertice: ");
//     scanf("%d", &n);

//     printf("adjucency matric: ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int j = 0; j<n; j++){
//         for(int i = 0; i<n; i++){
//             indegree[j] += a[i][j];
//         }
//     }

//     for(int i = 0; i<n; i++){
//         if(indegree[i] == 0){
//             stack[++top] = i;
//         }
//     }


//     while(top != -1){

//         int u = stack[top--];
//         topo[k++] = u;

//         for(int i = 0; i<n; i++){
//             if(a[u][i] == 1){
//                 indegree[i]--;

//                 if(indegree[i] == 0){
//                     stack[++top] = i;
//                 }
//             }
//         }
//     }

//     printf("topo sort :");
//     for(int i = 0; i<k; i++){
//         printf("%d\t", topo[i]);
//     }
//     return 0;
// }


// --------------------------------------------------practice---------------------------------


// #include<stdio.h>


// int main(){

//     int n, a[10][10], indegree[10] = {0};
//     int stack[10], top = -1;
//     int topo[10], k = 0;

//     printf("Enter the number of the vertices : ");
//     scanf("%d", &n);

//     printf("Enter the adjucency matrix: ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int j = 0; j<n; j++){
//         for(int i = 0; i<n; i++){
//             indegree[j] += a[i][j];
//         }
//     }

//     for(int i = 0; i<n; i++){
//         if(indegree[i] == 0){
//             stack[++top] = i;
//         }
//     }

//     while(top != -1){
//         int u = stack[top--];
//         topo[k++] = u;

//         for(int i = 0; i<n; i++){
//             if(a[u][i] == 1){
//                 indegree[i]--;

//                 if(indegree[i] == 0){
//                     stack[++top] = i;
//                 }
//             }
//         }
//     }

//     printf("Topological sort : ");
//     for(int i = 0; i<n; i++){
//         printf("%d ", topo[i]);
//     }


//     return 0;
// }



// --------------------------------------------------practice---------------------------------


// #include<stdio.h>

// int main(){

//     int n, a[10][10], indegree[10] = {0};
//     int stack[10], top = -1;
//     int topo[10], k = 0;

//     printf("Enter the number of the vertices : ");
//     scanf("%d", &n);

//     printf("Enter the adjucency matrix : ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int j = 0; j<n; j++){
//         for(int i = 0; i<n; i++){
//             indegree[j] += a[i][j];
//         }
//     }
//     for(int i = 0; i<n; i++){
//         if(indegree[i] == 0){
//             stack[++top] = i;
//         }
//     }

//     while(top != -1){
//         int u = stack[top--];
//         topo[k++] = u;

//         for(int i = 0; i<n; i++){
//             if(a[u][i] == 1){
//                 indegree[i]--;

//                 if(indegree[i] == 0){
//                     stack[++top] = i;
//                 }
//             }
//         }
//     }

//     printf("topological sort : ");
//     for(int i = 0; i<n; i++){
//         printf("%d ", topo[i]);
//     }

//     return 0;
// }



// --------------------------------------------------practice---------------------------------



// #include<stdio.h>

// int main(){

//     int n, a[10][10], indegree[10] = {0};
//     int stack[10], top = -1;
//     int topo[10], k = 0;



//     printf("Enter the number of the vertices : ");
//     scanf("%d", &n);

//     printf("Enter the adjucency matrix : ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int j = 0; j<n; j++){
//         for(int i = 0; i<n;i++){
//             indegree[j] += a[i][j];
//         }
//     }

//     for(int i = 0; i<n; i++){
//         if(indegree[i] == 0){
//             stack[++top] = i;
//         }
//     }

//     while(top != -1){
//         int u = stack[top--];
//         topo[k++] = u;

//         for(int i = 0; i<n; i++){
//             if(a[u][i] == 1){
//                 indegree[i]--;

//                 if(indegree[i] == 0){
//                     stack[++top] = i;
//                 }
//             }
//         }
//     }
//     printf("topo sort: ");
//     for(int i = 0; i<n; i++){
//         printf("%d ", topo[i]);
//     }
// }


// --------------------------------------------------practice---------------------------------



#include<stdio.h>

int main(){

    int n, a[10][10], indegree[10] = {0};
    int stack[10], top = -1;
    int topo[10], k = 0;

    printf("enter the number of the vertices : ");
    scanf("%d", &n);

    printf("enter the adjucency matrix : ");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int j = 0 ; j<n; j++){
        for(int i = 0; i<n; i++){
            indegree[j] += a[i][j];
        }
    }

    for(int i =0; i<n; i++){
        if(indegree[i] == 0){
            stack[++top] = i;
        }
    }

    while(top != -1){
        int u = stack[top--];
        topo[k++] = u;

        for(int i = 0; i<n; i++){
            if(a[u][i] == 1){
                indegree[i]--;

                if(indegree[i] == 0){
                    stack[++top] = i;
                }
            }
        }
    }

    printf("topo sort : ");
    for(int i = 0; i<n; i++){
        printf("%d\t", topo[i]);
    }
    
    return 0;
}