#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,a,b,k;cin>>n>>a>>b>>k; int count=0;
        for(int i=1;i<=n;i++){
             if(i%a==0 and i%b==0)count++;
        }
       if(n-count>=k)cout<<"Win"<<endl;
       else cout<<"Lose"<<endl;
    }
}