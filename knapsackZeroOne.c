// 0/1 knapsack problem using dynamic programming

#include<stdio.h>


int max(int a, int b){
    return (a>b)? a: b;
}

int knapsack(int n, int w[10], int p[10], int m){
   if(n == 0 || m == 0){
    return 0;
   } 

   if(w[n]>m){
    return knapsack(n-1,w,p,m);
   }else{
    return max(knapsack(n-1,w,p,m), knapsack(n-1,w,p,m-w[n])+p[n]);
   }
}

int main(){
    int n,m, result;
    int w[10],p[10];

    printf("Enter the number of the items: ");
    scanf("%d", &n);

    printf("Enter the weights of the items: ");
    for(int i= 1; i<=n; i++){
        scanf("%d", &w[i]);
    }
    printf("Enter the profits of the items: ");
    for(int i= 1; i<=n; i++){
        scanf("%d", &p[i]);
    }
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &m);

    result = knapsack(n,w,p,m);
    printf("The maximum profit is: %d", result);

    return 0;
}