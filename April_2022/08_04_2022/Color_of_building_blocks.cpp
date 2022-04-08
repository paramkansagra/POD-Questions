#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m;
    string s;

    vector<char> c;

    cin>>n;
    for(int i=0;i<n;i++){
        char temp;
        cin>>temp;
        c.push_back(temp);
    }

    cin>>m;
    cin>>s;

    vector<vector<int>> last_seen;
    
    for(int i=0;i<n;i++){
        vector<int> temp = {(int)c[i]};
        last_seen.push_back(temp);
    }

    for(int i=0;i<s.length();i++){
        for(int j=0;j<n;j++){
            if(last_seen[j][0] == (int)s[i]){
                last_seen[j].push_back(i);
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<last_seen[i].size()-1;j++){
            if(abs(last_seen[i][j]-last_seen[i][j+1]) <= m){
                cout<<"Invalid";
                exit(0);
            }
        }
    }
    cout<<"Valid"<<endl;

    return 0;
}