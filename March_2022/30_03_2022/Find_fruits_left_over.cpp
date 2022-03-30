#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string temp;
    cin>>temp;

    vector<char> n;
    for(int i=0;i<temp.length();i++){
        n.push_back(temp[i]);
    }

    vector<char> compare = {'a','m','o'};

    while(true){
        bool flag = false;
        for(int i=0;i<n.size()-2;i++){
            vector<char> sub_vector = {n.begin()+i,n.begin()+i+3};
            sort(sub_vector.begin(),sub_vector.end());
            if(sub_vector == compare){
                n.erase(n.begin()+i,n.begin()+i+3);
                flag = true;
                break;
            }
        }
        if(n.size()<3){
            break;
        }

        if(flag == false){
            break;
        }
    }

    if(n.size()>0){
        for(int i=0;i<n.size();i++){
            cout<<n[i];
        }
    }
    else{
        cout<<"No fruit is left over";
    }

    return 0;
}