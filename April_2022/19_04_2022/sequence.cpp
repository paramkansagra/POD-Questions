#include <iostream>

using namespace std;

int sequence(int n){
    if(n<=1){
        return n;
    }
    if(n%2 == 0){
        return sequence(n/2);
    }
    else{
        return sequence(n/2)+sequence((n/2)+1);
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool check = true;
    for(int i=1;i<=n;i++){
        if(arr[i-1] != sequence(i)){
            cout<<"No"<<endl;
            cout<<i;
            check = false;
            break;
        }
    }
    if(check){
        cout<<"Yes";
    }

}