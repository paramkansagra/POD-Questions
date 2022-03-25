#include <iostream>

using namespace std;

int main(){

    long long n;
    cin>>n;

    long long sum1 = 0,sum2 = 0;
    for(int i=n;i>0;i--){
        if(sum1<=sum2){
            sum1 += i;
        }
        else{
            sum2 += i;
        }
    }

    cout<<abs(sum1-sum2)<<endl;

    return 0;
}