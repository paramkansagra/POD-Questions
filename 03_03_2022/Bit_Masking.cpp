#include <iostream>
#include <string>

using namespace std;

string to_bin(int n){
    int arr[32] = {0};
    int i = 31;
    while(n != 0){
        arr[i] = n&1;
        n = n>>1;
        i--;
    }

    string bin="";
    for(int i=31;i>=0;i--){
        bin += to_string(arr[i]);
    }

    return bin;

}

int main(){

    int n,m;
    cin>>n>>m;

    string bin_n,bin_m;
    bin_n = to_bin(n);
    bin_m = to_bin(m);

    for(int i=0;i<32;i++){
        if(bin_n[i] == bin_m[i]){
            cout<<i+1<<" ";
        }
    }cout<<endl;

    return 0;
}