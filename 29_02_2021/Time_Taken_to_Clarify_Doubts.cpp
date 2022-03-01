#include <iostream>

using namespace std;

int sum(int data[],int n){
    int total = 0;
    for(int i=0;i<n;i++) total += data[i];

    return total;
}

int main(){

    int n;
    cin>>n;

    int data[n];
    int count = 0;
    int final[n] = {0};

    for(int i=0;i<n;i++){
        cin>>data[i];
    }

    int doubts_per_cycle;
    cin>>doubts_per_cycle;

    while(sum(data,n) != 0){
        for(int i=0;i<n;i++){
            if(data[i] == 0){
                continue;
            }
            else{
                if(data[i] > doubts_per_cycle){
                    count += doubts_per_cycle;
                    data[i] -= doubts_per_cycle;
                }
                else if(data[i] == doubts_per_cycle){
                    count += doubts_per_cycle;
                    data[i] = 0;
                    final[i] = count;
                }
                else{
                    count += data[i];
                    data[i] = 0;
                    final[i] = count;
                }
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<final[i]<<endl;
    }

    return 0;
}