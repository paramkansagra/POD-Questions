#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    float sum = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum += temp;
    }

    sum = sum/n;
    if(sum == (int)sum){
        cout<<"Yes"<<endl;
        cout<<sum<<endl;
    }
    else{
        cout<<"No";
    }

    return 0;
}