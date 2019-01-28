#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int count=1;
    
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1])count++;
        else{
            cout<<str[i-1]<<count;
            count=1;
        }
    }
    cout<<str[str.length()-1]<<count;
}