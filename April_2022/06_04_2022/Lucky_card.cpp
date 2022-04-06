#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<char>> data;
    for(int i=0;i<n;i++){
        vector<char> temp;
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            temp.push_back(x);
        }
        data.push_back(temp);
    }

    string pattern;
    cin>>pattern;

    vector<char> final;
    for(int i=0;i<n;i++){
        bool present = true;
        for(int j=0;j<pattern.length();j++){
            if(find(data[i].begin(),data[i].end(),pattern[j]) == data[i].end()){
                present = false;
                break;
            }
        }
        if(present){
            final = data[i];
            break;
        }
    }

    for(int i=0;i<m;i++){
        vector<char> x;
        for(int j=0;j<n;j++){
            x.push_back(data[j][i]);
        }
        bool present = true;
        for(int j=0;j<pattern.length();j++){
            if(find(x.begin(),x.end(),pattern[j]) == x.end()){
                present = false;
                break;
            }
        }
        if(present){
            final = x;
            break;
        }
    }

    if(final.size() != 0){
        sort(final.begin(),final.end());
        for(int i=0;i<n;i++){
            cout<<final[i];
        }cout<<endl;
        cout<<"Lucky Player";
    }
    else{
        cout<<"Unlucky Player";
    }

    return 0;
}