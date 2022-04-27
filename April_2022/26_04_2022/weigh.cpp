#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){

    int x,w1,w2,n;
    cin>>x>>w1>>w2>>n;

    vector<int> l;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        l.push_back(temp-x);
    }

    vector<int> ans;

    for(int i=0;i<n;i++){
        if(l[i]%w1 == 0 || l[i]%w2 == 0 || l[i]%(w1+w2) == 0){
            ans.push_back(1);
        }
        else{
            int a = l[i]%max(w1,w2);
            if(a%min(w1,w2) == 0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}