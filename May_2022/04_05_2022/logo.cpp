#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main(){

    int row,col;
    cin>>row>>col;

    vector<vector<char>> data;

    for(int i=0;i<row;i++){
        vector<char> v;
        for(int j=0;j<col;j++){
            char temp;
            cin>>temp;
            v.push_back(temp);
        }
        data.push_back(v);
    }

    bool flag = false;
    int count = 0;

    for(int i=0;i<row-1;i++){
        for(int j=0;j<col-1;j++){
            if(find(data[i].begin(),data[i].end(),'x') != data[i].end()){
                flag = true;
            }
            if(data[i][j] == 'l' && data[i+1][j] == 'l' && data[i+1][j+1] == 'l'){
                count++;
            }
        }
    }

    if(flag){
        cout<<count;
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}