#include <iostream>
#include <string>

using namespace std;

void reverse(string& str){
    int n = str.length();

    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}

int main(){

    string a,b;
    cin>>a>>b;

    string final = "";
    int carry = 0;
    string leftover = "";

    if(a.length() != b.length()){
        if(a.length() > b.length()){
            leftover = a.substr(0,a.length()-b.length());
            a = a.substr(a.length()-b.length(),a.length());
        }
        else{
            leftover = b.substr(0,b.length()-a.length());
            a = b.substr(b.length()-a.length(),b.length());
        }
    }

    for(int i=a.length()-1;i>-1;i--){
        int x = (int(a[i])+int(b[i])+carry)%10;
        carry = (int(a[i])+int(b[i])+carry)/10;
        final += char(x+int('a'));
    }

    for(int i=leftover.length()-1;i>-1;i--){
        int x = (int(leftover[i])+carry)%10;
        carry = (int(leftover[i])+carry)/10;
        final += char(x+int('a'));
    }

    if(carry>25){
        carry -= 26;
    }final += char(carry+int('a'));

    reverse(final);

    cout<<final;

    return 0;
}