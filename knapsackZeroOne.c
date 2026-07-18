// 0/1 knapsack problem using dynamic programming

// #include<stdio.h>


// int max(int a, int b){
//     return (a>b)? a: b;
// }

// int knapsack(int n, int w[10], int p[10], int m){
//    if(n == 0 || m == 0){
//     return 0;
//    } 

//    if(w[n]>m){
//     return knapsack(n-1,w,p,m);
//    }else{
//     return max(knapsack(n-1,w,p,m), knapsack(n-1,w,p,m-w[n])+p[n]);
//    }
// }

// int main(){
//     int n,m;
//     int w[10],p[10];

//     printf("Enter the number of the items: ");
//     scanf("%d", &n);

//     printf("Enter the weights of the items: ");
//     for(int i= 1; i<=n; i++){
//         scanf("%d", &w[i]);
//     }
//     printf("Enter the profits of the items: ");
//     for(int i= 1; i<=n; i++){
//         scanf("%d", &p[i]);
//     }
//     printf("Enter the capacity of the knapsack: ");
//     scanf("%d", &m);

//     int result = knapsack(n,w,p,m);
//     printf("The maximum profit is: %d", result);

//     return 0;
// }





// ---------------------------------------------------------PRACTICE-----------------------------



// #include<stdio.h>

// int max(int a, int b ){
//     return (a>b)? a:b;
// }

// int knapsack(int n, int w[10], int p[10], int m){
//     if(n == 0 || m == 0){
//         return 0;
//     }

//     if(w[n-1]>m){
//         return knapsack(n-1,w,p,m);
//     }else{
//         return max(knapsack(n-1,w,p,m), knapsack(n-1,w,p,m-w[n-1])+p[n-1]);
//     }
// }

// int main(){
//     int n, w[10], p[10], m;

//     printf("Enter the total number of the items: ");
//     scanf("%d", &n);

//     printf("Enter the weight of the items: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &w[i]);
//     }
//     printf("Profit of the items: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &p[i]);
//     }

//     printf("Enter the cpacity of the knpasack: ");
//     scanf("%d", &m);

//     int res = knapsack(n,w,p,m);

//     printf("Result is : %d\t", res);
//     return 0;
// }


// -------------------------------------practice


// #include<stdio.h>

// int max(int a, int b){
//     return (a>b)? a: b;
// }

// int knapsack(int n, int w[10], int p[10], int m){
//         if(n == 0 || m == 0){
//             return 0;
//         }

//         if(w[n-1]>m){
//             return knapsack(n-1,w,p,m);
//         }else{
//             return max(knapsack(n-1,w,p,m) , knapsack(n-1,w,p,m-w[n-1])+p[n-1]);
//         }
// }



// int main(){
//     int n,w[10],p[10], m;

//     printf("Enter the no of items : ");
//     scanf("%d", &n);

//     printf("Enter the weights and profit: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d %d", &w[i], &p[i]);
//     }

//     printf("Enter the capacity: ");
//     scanf("%d", &m);

//     int res = knapsack(n,w,p,m);
//     printf(" result is %d", res);


//     return 0;
// }



// -------------------------------------practice

#include<stdio.h>


int max(int a, int b){
    return(a>b)? a:b;                   //ternary operator
}


int knapsack(int n, int w[10], int p[10], int m){
    if(n == 0 || m == 0){
        return 0;
    }

    if(w[n-1] > m){
        return knapsack(n-1,w,p,m);
    }else{
        return max(knapsack(n-1,w,p,m), knapsack(n-1,w,p,m - w[n-1])+p[n-1]);
    }
}

int main(){

     int n, w[10], p[10], m;

     printf("Enter the number of items : ");
     scanf("%d", &n);

     printf("Enter the waights and profit of the items: ");
     for(int i = 0; i<n; i++){
        scanf("%d %d", &w[i], &p[i]);
     }

    printf("Enter the capacity of the knapsack : ");
    scanf("%d", &m);

    int res = knapsack(n,w,p,m);

    printf("Result : %d", res);

    return 0;
}