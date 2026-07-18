// #include<stdio.h>


// int nc = 1, min_cost = 0;

// int main(){
//     int n, min;
//     int a, b, u, v;
//     int cost[20][20], parent[20];

//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Enter the cost adjacency matrix: \n");
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             scanf("%d", &cost[i][j]);

//             if(cost[i][j] == 0){
//                 cost[i][j] = 999;
//             }
//         }
//     }

//     for(int i = 1; i<=n; i++){
//         parent[i] = 0;
//     }

//     printf("Edges in the mini cost spanning tree: \n");
//    while(nc<n){
//     min = 999;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if(cost[i][j]<min){
//                 min = cost[i][j];
//                 a = u = i;
//                 b = v = j;
//             }
//         }
//     }

//     while(parent[u]){
//         u = parent[u];
//     }
//     while(parent[v]){
//         v = parent[v];
//     }

//     if(u!=v){
//         printf("%d edge (%d->%d) = %d\n", nc++, a, b, min);
//         min_cost+=min;
//         parent[v] = u;
//     }
//     cost[a][b] = cost[b][a] = 999;
//    }
//    printf("\n minimum cost = %d\n", min_cost);
//     return 0;
// }


// -------------------------------------PRACTICE-----------------------------------


// #include<stdio.h>

// int nc = 1, min_cost = 0;

// int main(){
//     int n,min;
//     int a,b,u,v;
//     int cost[20][20], parent[20];

//     printf("Enter the number of thevertices: ");
//     scanf("%d", &n);

//     printf("Enter the cost adjucemcy matric: \n");
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             scanf("%d", &cost[i][j]);


//             if(cost[i][j] == 0){
//                 cost[i][j] = 999;
//             }
//         }
//     }
//     for(int i = 1; i<=n; i++){
//         parent[i] = 0;
//     }

//     printf("Edges in the mini spanning tree: \n");

//     while(nc<n){
//         min = 999;
//         for(int i = 1; i<=n; i++){
//             for(int j = 1; j<=n; j++){
//                 if(cost[i][j]<min){
//                     min = cost[i][j];
//                     a = u = i;
//                     b = v = j;
//                 }
//             }
//         }

//         while(parent[u]){
//             u = parent[u];
//         }
//         while(parent[v]){
//             v = parent[v];
//         }

//         if(u!=v){
//             printf("%d edge (%d->%d) = %d\n", nc++, a, b, min);
//             min_cost+=min;
//             parent[v] = u;
//         }
//         cost[a][b] = cost[b][a] = 999;
//     }
//     printf("\n min cost is : %d", min_cost);

//     return 0;
// }


// ----------------------------------------------------practice

// #include<stdio.h>
// int nc = 1, min_cost = 0;
// int main(){
//     int n,min;
//     int a,b,u,v;
//     int cost[10][10], parent[10];

//     printf("Enter the number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter the cost adjucency matrix: ");
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             scanf("%d", &cost[i][j]);

//             if(cost[i][j] == 0){
//                 cost[i][j] = 999;
//             }
//         }
//     }
//     for(int i = 1; i<=n; i++){
//         parent[i] = 0;
//     }

//     printf("Edges in the mini sapnning tree: ");
//     while(nc<n){
//         min = 999;
//         for(int i = 1; i<=n; i++){
//             for(int j = 1; j<=n; j++){
//                 if(cost[i][j]<min){
//                     min = cost[i][j];
//                     a = u = i;
//                     b = v = j;
//                 }
//             }
//         }
//         while(parent[u]){
//             u = parent[u];
//         }
//         while(parent[v]){
//             v = parent[v];
//         }

//         if(u!=v){
//             printf("%d edge (%d->%d) = %d\n", nc++, a,b,min);
//             min_cost += min;
//             parent[v] = u;
//         }
//         cost[a][b] = cost[b][a] = 999;
//     }
//     printf("min cost %d", min_cost);

//     return 0;
// }


// -----------------------------------------------------practice

// #include<stdio.h>
// int nc = 1, min_cost = 0;

// int main(){
//     int n, min;
//     int cost[10][10], parent[10];
//     int a,b,u,v;

//     printf("Enter the number of the vertices: ");
//     scanf("%d", &n);

//     printf("Enter the cost adjacency matrix:\n");
//     for(int i =1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             scanf("%d", &cost[i][j]);

//             // FIX: treat 0 as no edge
//             if(cost[i][j] == 0)
//                 cost[i][j] = 999;
//         }
//     }

//     for(int i = 1; i<=n; i++){
//         parent[i] = 0;
//     }

//     printf("Edges of the minimum spanning tree:\n");

//     while(nc<n){
//         min = 999;

//         for(int i = 1; i<=n; i++){
//             for(int j=1; j<=n; j++){
//                 if(cost[i][j] < min){
//                     min = cost[i][j];
//                     a = u = i;
//                     b = v = j;
//                 }
//             }
//         }

//         while(parent[u]){
//             u = parent[u];
//         }

//         while(parent[v]){
//             v = parent[v];
//         }

//         // FIX: correct comparison (avoid self-compare warning)
//         if(u != v){
//             printf("%d Edge (%d -> %d) = %d\n" , nc++, a, b, min);
//             min_cost += min;
//             parent[v] = u;
//         }

//         cost[a][b] = cost[b][a] = 999;
//     }

//     printf("Minimum cost of the cost adjacency matrix is : %d", min_cost);

//     return 0;
// }



// -----------------------------------practice

#include<stdio.h>


int nc = 1, min_cost = 0;

int main(){

    int n, min;
    int a,b,u,v;
    int cost[10][10],parent[10];

    printf("Enter the number of the vertices: ");
    scanf("%d", &n);

    printf("Enter the cost adjucency matrix: ");
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0){
                cost[i][j] = 999;
            }
        }
    }

    for(int i = 1; i<=n; i++){
        parent[i] = 0;
    }

    printf("Edges of the mini spanning tree: ");

    while(nc<n){
        min = 999;

        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(cost[i][j]< min){
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        while(parent[u]){
            u = parent[u];
        }

        while(parent[v]){
            v = parent[v];
        }

        if(u!=v){
            printf("%d edge (%d -> %d ) = %d\n", nc++, a, b, min);
            min_cost += min;
            parent[v] = u;
        }

        cost[a][b] = cost[b][a] = 999;
    }
    printf("the min cost of the cost adjucency matrix : %d ", min_cost);
    return 0;
}