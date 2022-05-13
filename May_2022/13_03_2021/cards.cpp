#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main(){

    int n,c;
    cin>>n>>c;

    vector<vector<int>> data;
    vector<int> temp;
    for(int i=1;i<n+1;i++){
        temp.push_back(i);
    }

    data.push_back(temp);

    for(int i=2;i<(c/n+1)+2;i++){
        vector<int> x;
        for(int j=((i-1)*n+1);j<(i*n+1);j++){
            x.push_back(j);
        }
        
        if(i%2 == 0){
            reverse(x.begin(),x.end()-1);
        }
        
        data.push_back(x);
    }

    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[i].size();j++){
            if(data[i][j] == c) cout<<"S"<<j+1<<endl;
        }
    }

    return 0;
}