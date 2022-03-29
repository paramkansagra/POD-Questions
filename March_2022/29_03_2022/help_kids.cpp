#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;

    int total = 0;
    int pos = 0;

    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;

        temp[0] = tolower(temp[0]);
        int start = min(temp[0],temp[temp.length()-1]);
        int end = max(temp[0],temp[temp.length()-1]);

        int count = 1;
        for(int j=0;j<temp.length();j++){
            int x = temp[j];
            if(x<start || x>end){
                count += 1;
            }
        }

        total += abs(pos-count);
        if(pos == count){
            printf("n\t0");
        }
        else if(pos>count){
            printf("b\t%d",pos-count);
        }
        else{
            printf("f\t%d",count-pos);
        }printf("\n");
        pos = count;
    }

    cout<<total<<endl;

    return 0;
}