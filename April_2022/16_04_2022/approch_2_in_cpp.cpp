#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m,dis=999999;
    cin>>n;

    vector<int> data;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        data.push_back(temp);
    }

    cin>>m;
    vector<int> final;

    for(int i=0;i<n;i++){
        int temp1 = data[i];
        int temp2 = m;
        int count = 0;

        while(temp1 != 0 && temp2 != 0){
            if(temp1&1 != temp2&1){
                count++;
            }
            temp1 = temp1>>1;
            temp2 = temp2>>1;
        }

        while(temp1 != 0){
            count++;
            temp1 = temp1>>1;
        }
        while(temp2 != 0){
            count++;
            temp2 = temp2>>1;
        }

        if(count<dis){
            dis = count;
            final.clear();
            final.push_back(data[i]);
        }
        else if(count == dis){
            final.push_back(data[i]);
        }
    }

    for(int i=0;i<final.size();i++){
        cout<<final[i]<<endl;
    }

    return 0;
}