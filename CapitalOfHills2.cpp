#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nge[1000005],nee[1000005];

void NGE(ll arr[],int n){
    stack<ll> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.empty() == false and arr[i]>arr[s.top()]){
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    while(s.empty() == false){
        nge[s.top()] = 1000001;
            s.pop();
    }
}
void NEE(ll arr[],int n){
    stack<ll> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.empty() == false and arr[i]>=arr[s.top()]){
            nee[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    while(s.empty() == false){
        nee[s.top()] = nge[s.top()];
            s.pop();
    }
}
pair<ll,ll> p;
int main(){
       freopen("input.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int n;cin>>n;
    ll arr[n+1];
    //set< pair<ll,ll> > count;
    ll count=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp[1];arr[n]=-1;
    NGE(arr,n);
    NEE(arr,n);
    
    for(int i=0;i<n-1;i++){
        int idx = i+1;
        while(idx<=nge[i]){
            if(idx!=1000001)
            count++;
            if(idx>=nge[i])break;
           // cout<<"IN THE WHILE "<<i<<" "<<idx<<endl;
            
            
            idx = nee[idx];
        }
        // for(int j=i+1;j<=nge[i];j++){
        //     if( arr[j] >= arr[idx]){
        //         p = make_pair(max(arr[i],arr[j]),min(arr[i],arr[j]));
        //         count++;
        //         idx=j;
        //     }
        // }clear
        cout<<i<<" "<<count<<endl;
    }
   
   // cout<<endl;
    cout<<count<<endl;
 
}