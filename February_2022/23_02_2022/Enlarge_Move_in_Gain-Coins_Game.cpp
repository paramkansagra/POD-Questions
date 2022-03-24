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