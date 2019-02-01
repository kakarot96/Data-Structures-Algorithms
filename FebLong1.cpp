#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll hcf(ll a, ll b){
    if(b==0)return a;
    else 
    return hcf(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n,a,b,k;cin>>n>>a>>b>>k; ll count=0,hcfAB;
        hcfAB =hcf(a,b) ;
       ll lcm = (a*b)/hcfAB;
       if((n/a) + (n/b) - (2*(n/lcm))-k>=0)cout<<"Win"<<endl;
       else cout<<"Lose"<<endl;
    }
}