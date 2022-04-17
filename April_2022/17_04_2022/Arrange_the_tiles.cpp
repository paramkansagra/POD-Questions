#include <iostream>

using namespace std;

int find(int arr[],int find,int n){
    for(int i=0;i<n;i++){
        if(arr[i] == find){
            return i;
        }
    }
}

int main(){

    int n,count=0;
    cin>>n;

    int current[n],desired[n];

    for(int i=0;i<n;i++){
        cin>>current[i];
    }

    for(int i=0;i<n;i++){
        cin>>desired[i];
    }

    for(int i=0;i<n;i++){
        if(current[i] == desired[i]){
            continue;
        }
        else{
            int x = find(current,desired[i],n);
            swap(current[i],current[x]);
            count++;
        }
    }
    
    cout<<count;

    return 0;
}