// #include<stdio.h>

// int main(){
//     float w[10], p[10], r[10];              //weight, profit, ratio
//     float capacity, total_val = 0;
//     int n;

//     printf("Enter the total number of items: ");
//     scanf("%d", &n);

//     for(int i= 0; i<n; i++){
//         printf("\nEnter weight and profit of item %d: ", i+1);
//         scanf("%f %f", &w[i], &p[i]);
//         r[i] = p[i]/w[i];
//     }

//     printf("Enter the capacity of the knapsack: ");
//     scanf("%f", &capacity);
    
//     // sort 
//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(r[i]<r[j]){
//                 float temp = r[i];
//                 r[i] = r[j];
//                 r[j] = temp;
            
//                 temp = w[i];
//                 w[i] = w[j];
//                 w[j] = temp;
            
//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp;
            
//         }
//     }
// }


//     for(int i =0; i<n; i++){
//         if(w[i]<=capacity){
//             total_val += p[i];
//             capacity -= w[i];
//         }else{
//             total_val += r[i] * capacity;
//             break;                                  //important to break the loop after adding the fraction of the last item
//         }
//     }

//     printf("The total profit is: %.2f", total_val);

//     return 0; 
// }




// -------------------------------------------greedy knapsack--------------------------------


// #include<stdio.h>


// int main(){
//     float w[10], p[10], capacity, r[10], total_val = 0;
//     int n;


//     printf("Enter the number of items: ");
//     scanf("%d", &n);

//     printf("enter the weight and profit : ");
//     for(int i = 0; i<n; i++){
//         scanf("%f %f", &w[i], &p[i]);
//         r[i] = p[i]/w[i];
//     }


//     printf("Enter the capacity: ");
//     scanf("%f", &capacity);


//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(r[i]<r[j]){
//                 float temp = r[i];
//                 r[i] = r[j];
//                 r[j] = temp;

//                 temp = w[i];
//                 w[i] = w[j];
//                 w[j] = temp;

//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp;
//             }
//         }
//     }


//     for(int i = 0; i<n; i++){
//         if(w[i]<=capacity){
//             total_val += p[i];
//             capacity -= w[i];
//         }else{
//             total_val += r[i]*capacity;
//             break;
//         }
//     }

//     printf("total max val is %.2f", total_val);


//     return 0;
// }


// -------------------------------------------greedy knapsack--------------------------------


// #include<stdio.h>


// int main(){

//     float w[10], p[10], r[10], capacity , total_val = 0;
//     int n;

//     printf("Enter the number of items : ");
//     scanf("%d", &n);

//     printf("Enter the weight and profit of the items : ");
//     for(int i = 0; i<n; i++){
//         scanf("%f %f", &w[i], &p[i]);
//         r[i] = p[i]/w[i];
//     }

//     printf("Enter the capacity of the knapsack: ");
//     scanf("%f", &capacity);


//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(r[i]<r[j]){
//                 float temp = r[i];
//                 r[i] = r[j];
//                 r[j] = temp;

//                 temp = w[i];
//                 w[i] = w[j];
//                 w[j] = temp;

//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp;
//             }
//         }
//     }

//     for(int i = 0; i<n; i++){
//         if(w[i]<=capacity){
//             total_val += p[i];
//             capacity -= w[i];
//         }else{
//             total_val += r[i]*capacity;
//             break;
//         }
//     }


//     printf("The maximum value is : %.2f", total_val);

//     return 0;
// }


// -------------------------------------------Practice--------------------------------

// #include<stdio.h>

// int main(){

//     float w[10], p[10], r[10],capacity, total_val = 0;
//     int n;


//     printf("Enter the total number of the items : ");
//     scanf("%d", &n);

//     printf("Enter the weight and profit of the items : ");
//     for(int i = 0; i<n; i++){
//         scanf("%f %f", &w[i], &p[i]);
//         r[i] = p[i]/w[i];
//     }

//     printf("Enter the capacity of the knapsack: ");
//     scanf("%f", &capacity);

//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(r[i]<r[j]){
//                 float temp = r[i];
//                 r[i] = r[j];
//                 r[j] = temp;

//                 temp = w[i];
//                 w[i] = w[j];
//                 w[j] = temp;

//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp; 
//             }
//         }
//     }
    
//     for(int i = 0; i<n; i++){
//         if(w[i] <= capacity){
//             total_val += p[i];
//             capacity -= w[i];
//         }else{
//             total_val += r[i]*capacity;
//             break;
//         }
//     }

//     printf("The total prifit is %.2f", total_val);

//     return 0;
// }


// -------------------------------------------Practice--------------------------------


#include<stdio.h>

int main(){

    float w[10], p[10], r[10], capacity, total_val = 0;
    int n;

    printf("Enter the number of the items : ");
    scanf("%d", &n);

    printf("Enter the weight and profit :  "){
        for(int i = 0; i<n; i++){
                    scanf("%f %f", &w[i], &p[i]);
                    r[i] = p[i]/w[i];
                }
    }
        
    

    printf("Enter the capacity : ");
    scanf("%f", &capacity);

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(r[i]<r[j]){
                float temp = r[i];
                r[i] = r[j];
                r[j] = temp;

                temp = w[i];
                w[i] = w[j];
                w[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++){
        if(w[i]<=capacity){
            total_val += p[i];
            capacity -= w[i];
        }else{
            total_val += r[i]*capacity;
            break;
        }
    }

    return 0;
}