#include <string>
#include <iostream>

using namespace std;

string new_string(int n){
    string s = "";
    while(n != 0){
        int r = n%3;
        n = n / 3;
        if(r == 0){
            s = "r" + s;
        }
        if(r == 1){
            s = "g" + s;
        }
        if(r == 2){
            s = "b" + s;
        }
    }
    
    while(s.length() != 20){
        s = "r" + s;
    }
    return s;
}

int count(string s1,string s2){
    int x = 0;
    for(int i=0;i<20;i++){
        if(s1[i] != s2[i]){
            x++;
        }
    }
    return x;

}

int main(){

    int n;
    cin>>n;

    int p = n,q = n;
    string s1 = new_string(n);
    string s2= new_string(p);
    string s3 = new_string(q);
    while(true){
        if(count(s1,s2) == 1){
            break;
        }
        p++;
        s2 = new_string(p);
    }

    while(true){
        if(count(s1,s3) == 2){
            break;
        }
        q++;
        s3 = new_string(q);
    }

    printf("%d\t%d\n",p,q);
    cout<<s1<<endl<<s2<<endl<<s3<<endl;

    return 0;
}