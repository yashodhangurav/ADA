// #include <stdio.h>

// #define N 4   // change N if needed

// void printBoard(char board[N][N]) {
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             printf("%c ", board[i][j]);
//         }
//         printf("\n");
//     }
//     printf("--------------\n");
// }

// int isSafe(char board[N][N], int row, int col) {

//     // vertical (check above)
//     for(int i = 0; i < row; i++) {
//         if(board[i][col] == 'Q')
//             return 0;
//     }

//     // upper left diagonal
//     for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if(board[i][j] == 'Q')
//             return 0;
//     }

//     // upper right diagonal
//     for(int i = row, j = col; i >= 0 && j < N; i--, j++) {
//         if(board[i][j] == 'Q')
//             return 0;
//     }

//     return 1;
// }

// void nQueens(char board[N][N], int row) {

//     if(row == N) {
//         printBoard(board);
//         return;
//     }

//     for(int j = 0; j < N; j++) {
//         if(isSafe(board, row, j)) {
//             board[row][j] = 'Q';
//             nQueens(board, row + 1);
//             board[row][j] = '.';  // backtrack
//         }
//     }
// }

// int main() {

//     char board[N][N];

//     // initialize board with '.'
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             board[i][j] = '.';
//         }
//     }

//     nQueens(board, 0);

//     return 0;
// }



// -----------------------------------------prctice


// #include<stdio.h>

// #define N 4


// void printBoard(char board[N][N]){
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             printf("%c ", board[i][j]);
//         }
//         printf("\n");
//     }
//     printf("---------------------------\n");
// }


// int isSafe(char board[N][N], int row, int col){

//     // verticle check
//     for(int i = 0; i<N; i++){
//         if(board[i][col] == 'Q'){
//             return 0;
//         }
//     }

//     // upper left
//     for(int i = row, j = col; i >= 0 && j>= 0; i--,j--){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }

//     // upper right

//     for(int i = row, j = col; i >= 0 && j < N; i--, j++){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }


//     return 1;
// }


// void nQueens(char board[N][N], int row){
//     if(row == N){
//         printBoard(board);
//         return;
//     }

//     for(int j = 0; j<N; j++){
//         if(isSafe(board, row, j)){
//             board[row][j] = 'Q';
//             nQueens(board, row+1);
//             board[row][j] = '.';
//         }
//     }
// }

// int main(){

//     char board[N][N];

//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             board[i][j] = '.';
//         }
//     }

//     nQueens(board, 0);

//     return 0;
// }





// -----------------------------------------prctice---------------------------

// #include<stdio.h>

// #define N 4


// void printBoard(char board[N][N]){
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j< N; j++){
//             printf("%c ", board[i][j]);
//         }
//         printf("\n");
//     }
//     printf("-----------------------------\n");
// }

// int isSafe(char board[N][N], int row, int col){

//     // verticle
//     for(int i = 0; i<N; i++){
//         if(board[i][col] == 'Q'){
//             return 0;
//         }
//     }

//     //upper left
//     for(int i =row, j = col; i>=0 && j>=0; i--,j--){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }

//     //upper right
//     for(int i = row, j = col; i>=0 && j < N; i--,j++){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }


//     return 1;
// }

// void nQueens(char board[N][N], int row){
//     if(row == N){
//         printBoard(board);
//         return;
//     }

//     for(int j = 0; j<N; j++){
//         if(isSafe(board, row, j)){
//             board[row][j] = 'Q';
//             nQueens(board, row+1);
//             board[row][j] = '.';
//         }
//     }
// }

// int main(){

//     char board[N][N];

//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             board[i][j] = '.';
//         }
//     }

//     nQueens(board, 0);

//     return 0;
// }



// -----------------------------------------prctice---------------------------


// #include<stdio.h>

// #define N 5


// void printBoard(char board[N][N]){
//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             printf("%c ", board[i][j]);
//         }

//         printf("\n");
//     }
//     printf("-------------------------------\n");
// }


// int isSafe(char board[N][N], int row, int col){

//     // verticlally
//     for(int i = 0; i<N; i++){
//         if(board[i][col] == 'Q'){
//             return 0;
//         }
//     }

//     // upper left
//     for(int i = row, j = col; i>=0 && j>=0; i--,j--){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }

//     // upper right
//     for(int i = row, j = col; i>=0 && j < N; i--,j++){
//         if(board[i][j] == 'Q'){
//             return 0;
//         }
//     }

//     return 1;
// }


// void nQueens(char board[N][N], int row){
//     if(row == N){
//         printBoard(board);
//         return;
//     }

//     for(int j = 0; j<N; j++){
//         if(isSafe(board, row, j)){
//             board[row][j] = 'Q';
//             nQueens(board, row+1);
//             board[row][j] = '.';
//         }
//     }
// }

// int main(){

//     char board[N][N];

//     for(int i = 0; i<N; i++){
//         for(int j = 0; j<N; j++){
//             board[i][j] = '.';
//         }
//     }

//     nQueens(board, 0);

//     return 0;
// }



// -----------------------------------------prctice---------------------------