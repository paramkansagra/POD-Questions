#include<iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int subStr(string s2, string s1)
{
	int counter = 0; // pointing s2
	int i = 0;
	for(;i<s1.length();i++)
	{
		if(counter==s2.length())
			break;
		if(s2[counter]==s1[i])
		{
			counter++;
		}
	else
		{
			// Special case where character preceding the i'th character is duplicate
			if(counter > 0)
			{
				i -= counter;
			}
			counter = 0;
		}
	}
	return counter < s2.length()?-1:i-counter;
}

bool lastCondition(string s){
    vector<char> temp;
    int x;
    if(4<s.length()){
        x = s.length();
    }
    else{
        x = 4;
    }
    for(int i=1;i<x;i++){
        if(find(temp.begin(),temp.end(),s[i]) == temp.end()){
            temp.push_back(s[i]);
        }
    }
    
    if(temp.size() == 1){
        return true;
    }
    else{
        return false;
    }
}
 
int main(){

    map<char,int> roman = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    vector<char> m = {'I','V','X','L','C','D','M'};
    string s;
    vector<int> stack;
    int last_index = 0;

    cin>>s;
    reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        if(find(m.begin(),m.end(),s[i])-m.begin()<last_index){
            auto itr = roman.find(s[i]);
            stack[stack.size()-1] = stack[stack.size()-1]-itr->second;
        }
        else{
            auto itr = roman.find(s[i]);
            last_index = find(m.begin(),m.end(),s[i])-m.begin();
            stack.push_back(itr->second);
        }
    }
    
    if((subStr("VV",s) != -1) || (subStr("LL",s) != -1) || (subStr("MM",s) != -1) || lastCondition(s)){
        cout<<"Invalid";
        exit(1);
    }
    
    
    
    int sum = 0;
    for(int i=0;i<stack.size();i++){
        sum += stack[i];
    }
    
    cout<<sum;
    
    return 0;
}