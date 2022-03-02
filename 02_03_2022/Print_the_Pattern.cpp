#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n-1;i>-1;i--){
        string temp = "";
        for(int j=0;j<i;j++){
            temp += ".";
        }
        temp += "*";
        for(int j=0;j<n-i-1;j++){
            temp += ".";
        }
        
        string temp2 = "";
        for(int j=n-2;j>-1;j--){
            temp2 += temp[j];
        }
        
        string final = temp + temp2;

        for(int j=0;j<final.length();j++){
            if(j != final.length()-1){
            cout<<final[j]<<' ';
            }
            else{
                cout<<final[j];
            }
        }cout<<endl;
    }

    return 0;
}