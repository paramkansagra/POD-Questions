// Gain-Coins is a mxn board game, in which the number of coins in each square increases during enlarge move. The number of coins on each square ‘s’ which is row ‘r’ and column ‘c’ increases by the maximum number of coins in the row ‘r’ and also increases by the minimum number of coins in the column of ‘c’. Given the number of coins in the board write a C program to print the number of coins in the board after enlarge move. For example if the number of coins in a 3X3 board is:
// 2 3 4
// 5 7 3
// 3 8 1
// Then after enlarge move the number of coins will be:
// 8 10 9
// 14 17 11
// 13 19 10
// Input Format
// First line contains the number of rows in the board, r
// Next line contains the number of columns in the board, c
// Next ‘r’ lines contain the number of coins on each row separated by a space
// Output Format
// Print the number of coins on the board after enlarge operation
// Print the number of coins in one row on each line separated by a space
// Note: A space is present at the end of each row

#include <iostream>

using namespace std;

int main(){

    int r,c;
    cin>>r>>c;

    // makeing a dynamic array
    int** arr = new int*[r];
    int** ans = new int*[r];

    for(int i=0;i<r;i++){
        arr[i] = new int[c];
        ans[i] = new int[c];
    }

    // taking input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    // filling the answer array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp = arr[i][j];
            int maxx = -9999;
            int minn = +9999;
            for(int k=0;k<c;k++){
                maxx = max(arr[i][k],maxx);
            }
            for(int k=0;k<r;k++){
                minn = min(arr[k][j],minn);
            }
            ans[i][j] = temp+minn+maxx;

        }
    }

    // printing the answer array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<' ';
        }cout<<endl;
    } 

    // cleaning the array
    for(int i=0;i<r;i++){
        delete []arr[i];
        delete []ans[i];
    }

    delete []arr;
    delete []ans;

    return 0;
}