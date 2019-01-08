#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,p,ans=0,idx=0;cin>>n>>p;
        ans = (n-1)/2;
        if(n%2==0)idx=(n/2)+1;
        else idx=(n+1)/2;
        
        long int g1=p-n;
        long int g2=p-ans;
        int count = g1*g1 + g1*g2 + g2*g2;
         cout<<count<<endl;
        
    }
}