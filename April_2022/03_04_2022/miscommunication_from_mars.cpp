#include <iostream>
using namespace std;

int getXOR(int x, int y) {
  return (x | y) & (~x | ~y);
}

bool check(int arr[][2],int index,int x,int y){
    for(int i=0;i<index;i++){
        if(arr[i][0] == x && arr[i][1] == y){
            return false;
        }
    }
    return true;
}


int main(){

    int n;
    cin>>n;

    int data[n];
    for(int i=0;i<n;i++){
        cin>>data[i];
    }

    int d,xorr;
    cin>>d>>xorr;

    int arr[n][2];
    int index = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && abs(data[i]-data[j]) == d && getXOR(data[i],data[j]) == xorr){
                int x = min(data[i],data[j]);
                int y = max(data[i],data[j]);
                if(check(arr,index,x,y)){
                    arr[index][0] = x;
                    arr[index++][1] = y;
                }
            }
        }
    }

    for(int i=0;i<index;i++){
        printf("%d\t%d\n",arr[i][0],arr[i][1]);
    }

    return 0;
}