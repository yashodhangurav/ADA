// shortest path problem using floyds algorithm

#include<stdio.h>

int min(int a, int b){
    if(a<b) return a;
    else return b;
}

int floyds(int a[10][10], int n){
    
    int d[10][10];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            d[i][j] = a[i][j];
        }
    }

    for(int k = 0; k<n; k++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[10][10], n;

    printf("Enter the number of the vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix: \n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    floyds(a,n);

    return 0;
}