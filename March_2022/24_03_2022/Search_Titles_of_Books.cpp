#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
    string a;
    int n;

    getline(cin,a);
    cin>>n;

    for(int i=0;i<a.length();i++){
        a[i] = tolower(a[i]);
    }

    char data[n][100];
    char ans[n][100];

    for(int i=0;i<n;i++){
        cin.getline(data[i],100);
    }

    int masterIndex = 0;

    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<strlen(data[i]);j++){
            char x = tolower(data[i][j]);
            if(a.find(x) == string::npos){
                flag = false;
                break;
            }
        }
        if(flag){
            strcpy(ans[masterIndex++],data[i]);
        }
        cout<<data[i]<<endl;
    }

    if(masterIndex != 0){
        for(int i=0;i<masterIndex;i++){
            cout<<ans[i]<<endl;
        }
    }
    else{
        cout<<"No such book"<<endl;
    }

    return 0;
}