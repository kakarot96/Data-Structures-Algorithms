#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000][26];
    int t;cin>>t;
    while(t--){
        memset(arr,0,sizeof(arr));

        int n;cin>>n;
        string s;
        for(int i=0;i<n;i++){
                cin>>s;
                for(int j=0;j<s.length();j++){
                    arr[i][s[j]-'a']++;
                }
        }
       int count=0;
       for(int i=0;i<26;i++){
           int flag=1;
           for(int j=0;j<n;j++){
                if(arr[j][i]==0){
                    flag=0;break;
                }
           }
           if(flag)count++;
       }
       cout<<count<<endl;
    }
}