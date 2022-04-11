#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> data;
    vector<int> sorted;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        data.push_back(temp);
        sorted.push_back(temp);
    }

    sort(sorted.begin(),sorted.end());
    if(data == sorted){
        cout<<"Correct"<<endl;
    }
    else{
        bool flag = false;
        int m = 0;
        for(int i=0;i<n;i++){
            int x = data[0];
            data.erase(data.begin());
            data.push_back(x);
            if(data == sorted){
                flag = true;
                m = i+1;
            }
        }
        if(flag){
            cout<<"Easily correctable\n"<<m<<endl;
        }
        else{
            cout<<"Not easily correctable"<<endl;
        }
    }

    return 0;
}