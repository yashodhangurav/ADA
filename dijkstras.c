// #include<stdio.h>
// #include<limits.h>

// void dijkstras(int g[10][10], int n, int src){
//     int visited[10], dist[10];

//     // initializing
//     for(int i = 0; i<n; i++){
//         visited[i] = 0;
//         dist[i] = INT_MAX;
//     }
    
//     dist[src] = 0;

//     for(int count = 0; count<n-1; count++){
//         int min = INT_MAX, u;

//         for(int i = 0; i<n; i++){
//             if(!visited[i] && dist[i]<min){
//                 min = dist[i];
//                 u = i;
//             }
//         }
//         visited[u] = 1;

//         for(int v = 0; v<n; v++){
//             if(!visited[v] && g[u][v] && dist[u] + g[u][v] < dist[v]){
//                 dist[v] = dist[u] + g[u][v];
//             }
//         }
//     }



//     // print result

//     for(int i =0; i<n; i++){
//         printf("%d -> %d = %d\n", src, i, dist[i]);
//     }


// }


// int main(){
//     int g[10][10], n,src;

//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Print the adjucency matrix: \n");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &g[i][j]);
//         }
//     }

//     printf("Enter the source vertex: ");
//     scanf("%d", &src);
//     dijkstras(g, n, src);


//     return 0;
// }




// ----------------------------------------practice---------------------------------------

// #include<stdio.h>
// #include<limits.h>

// void dijkstras(int g[10][10], int n, int src){
//     int visited[10], dist[10];

//     for(int i = 0; i<n; i++){
//         visited[i] = 0;
//         dist[i] = INT_MAX;
//     }
//     dist[src] = 0;

//     for(int count = 0; count<n-1; count++){
//         int min = INT_MAX, u;

//         for(int i = 0; i<n; i++){
//             if(!visited[i] && dist[i]<min){
//                 min = dist[i];
//                 u = i;
//             }
//         }

//         visited[u] = 1;

//         for(int v = 0; v<n; v++){
//             if(!visited[v] && g[u][v] && dist[u]+g[u][v] < dist[v]){
//                 dist[v] = dist[u]+g[u][v];
//             }
//         }
//     }


//     // print result
//     for(int i = 0; i<n; i++){
//         printf("%d -> %d = %d\n", src, i, dist[i]);
//     }
// }

// int main(){
//     int g[10][10], n, src;

//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Print the adjucency matrix: \n");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &g[i][j]);
//         }
//     }
//     printf("Enter the source vertex: ");
//     scanf("%d", &src);
//     dijkstras(g, n, src);
// }



// -----------------------------------------------practice 2 ------------------------------


// #include<stdio.h>
// #include<limits.h>


// void dijkstras(int g[10][10], int n, int src){
    
//     int visited[10], dist[10];

//     for(int i = 0; i<n; i++){
//         visited[i] = 0;
//         dist[i] = INT_MAX;
//     }
//     dist[src] = 0;

//     for(int count = 0; count<n-1; count++){
//         int min = INT_MAX, u;

//         for(int i = 0; i<n; i++){
//             if(!visited[i] && dist[i]< min){
//                 min = dist[i];
//                 u = i;
//             }
//         }
//         visited[u] = 1;

//         for(int v = 0; v<n; v++){
//             if(!visited[v] && g[u][v] && dist[u]+g[u][v] < dist[v]){
//                 dist[v] = dist[u]+g[u][v];
//             }
//         }
        
//     }

//     // print
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             printf("%d -> %d = %d", src, i, dist[i]);
//         }
//         printf("\n");
//     }
// }


// int main(){
//     int g[10][10], n , src;

//     printf("Enter the number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix: \n");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &g[i][j]);
//         }
//     }

//     printf("enter the src :");
//     scanf("%d", &src);

//     dijkstras(g,n,src);

//     return 0;
// }




// ---------------------------------------practice 4----------------------------------

// #include<stdio.h>
// #include<limits.h>


// void dijkstras(int g[10][10], int n, int src){
//     int visited[10], dist[10];

//     for(int i = 0; i<n; i++){
//         visited[i] = 0;
//         dist[i] = INT_MAX;
//     }

//     dist[src] = 0;

//     for(int count = 0; count<n-1; count++){
//         int min = INT_MAX, u;
//         for(int i = 0; i<n; i++){
//             if(!visited[i] && dist[i]<min){
//                 min = dist[i];
//                 u = i;
//             }
//         }
//         visited[u] = 1;

//         for(int v = 0; v<n; v++){
//             if(!visited[v] && g[u][v] && dist[u]+g[u][v]<dist[v]){
//                 dist[v] = dist[u]+g[u][v];
//             }
//         }
//     }

//     // print

//     for(int i = 0; i<n; i++){
//         printf("%d -> %d = %d", src, i, dist[i]);
//         printf("\n");
//     }
    
// }


// int main(){
//     int g[10][10], n, src;


//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adacecy matrix: ");
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             scanf("%d", &g[i][j]);
//         }
//     }

//     printf("Enter the source: ");
//     scanf("%d", &src);

//     dijkstras(g,n,src);


//     return 0;
// }



// ------------------------------------practice



#include<stdio.h>
#include<limits.h>


void dijkstras(int g[10][10], int n , int src){
    int visited[10], dist[10];
    for(int i = 0; i<n; i++){
        visited[i] = 0;
        dist[i] = INT_MAX;
    }
    dist[src] = 0;

    for(int count = 0; count<n-1; count++){
        int min = INT_MAX,u;

        for(int i = 0; i<n; i++){
            if(!visited[i] && dist[i]<min){
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;
        for(int v = 0; v<n; v++){
            if(!visited[v] && g[u][v] && dist[u]+g[u][v]<dist[v]){
                dist[v] = dist[u]+g[u][v];
            }
        }
    }


    for(int i = 0; i<n; i++){
        printf("%d -> %d = %d", src, i, dist[i]);

        printf("\n");
    }
}

int main(){
    int g[10][10], n,src;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost adjucency matrix: ");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &g[i][j]);
        }
    }

    printf("Enter the source: ");
    scanf("%d", &src);

    dijkstras(g,n,src);

    return 0;
}