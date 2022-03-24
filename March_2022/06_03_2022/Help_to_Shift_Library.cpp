#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin>>n;

    int ramu=0,somu=0,trips = 0;
    string last = "";

    while(true){
        if(ramu + somu >= n){
            break;
        }
        else{
            trips++;
            if(trips&1){
                ramu += trips;
                if(ramu + somu > n){
                    ramu -= (ramu + somu - n);
                    last = "Ramu";
                    break;
                }
                somu += trips*2;
                if(ramu + somu > n){
                    somu -= (somu + ramu - n);
                    last = "Somu";
                    break;
                }
            }
            else{
                ramu += trips * 2;
                if(ramu + somu > n){
                    ramu -= (ramu + somu - n);
                    last= "Ramu";
                    break;
                }
                somu += trips;
                if(somu + ramu > n){
                    somu -= (ramu + somu - n);
                    last = "Somu";
                    break;
                }
            }
        }
    }

    cout<<trips<<endl;
    cout<<ramu<<"\t"<<somu<<endl;
    cout<<last<<endl;

    return 0;
}