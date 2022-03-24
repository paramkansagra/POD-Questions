#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<string> data;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        data.push_back(temp);
    }

    string final = "";
    for(int i=0;i<n;i++){
        data[i][0] = toupper(data[i][0]);
        if(i != n-1){
            final += data[i]+'_';
        }
        else{
            final += data[i];
        }
    }
    cout<<final;

    return 0;
}