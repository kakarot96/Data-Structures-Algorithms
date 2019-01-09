#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;scanf("%d",&t);
    while(t--){
        long long int n,p,ans=0,idx=0;scanf("%lld%lld",&n,&p);
        ans = (n-1)/2;
        if(n%2==0)idx=(n/2)+1;
        else idx=(n+1)/2;
        
        long long int g1=p-n;
        long long int g2=p-ans;
        if(ans==0){
            cout<<p*p*p<<endl;
            continue;
        }
        long long int count = g1*g1 + g1*g2 + g2*g2;
         cout<<count<<endl;
        
    }
}