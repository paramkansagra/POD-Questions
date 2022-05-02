#include <iostream>
#include <vector>

using namespace std;
 
int main(){

    int n,m;
    vector<vector<int>> deadline,worked;

    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vector<int> temp = {a,b};
        deadline.push_back(temp);
    }

    cin>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        vector<int> temp = {a,b};
        worked.push_back(temp);
    }

    int final = 0;
    int half;

    if(n%2 == 0){
        half = n/2;
    }
    else{
        half = (n+1)/2;
    }

    for(int i=0;i<n;i++){
        bool flag = true;
        int count = 0;
        for(int j=0;j<m;j++){
            if(deadline[i][0]>=worked[j][0]){
                count += worked[j][1];
            }
        }

        if(count>=deadline[i][1]){
            final++;
        }
    }

    if(final>=half){
        cout<<"Allowed";
    }
    else{
        cout<<"Denied";
    }

    return 0;
}