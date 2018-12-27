/* 
        Problem Statement:
        
        Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that
        a!=b and a is maximum and b is second maximum in that subarray.
        
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-shino-and-pairs/
        
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nge[200000];

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
        nge[s.top()] = n-1;
            s.pop();
    }
}
pair<ll,ll> p;
int main(){
    int n;cin>>n;
    ll arr[n+1];
    set< pair<ll,ll> > count;
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp[1];arr[n]=-1;
    NGE(arr,n);
    
    for(int i=0;i<n-1;i++){
        int idx = n;
        for(int j=i+1;j<=nge[i];j++){
            if(arr[j]!=arr[i] and arr[j]>arr[idx]){
                p = make_pair(max(arr[i],arr[j]),min(arr[i],arr[j]));
                count.insert(p);
                idx=j;
            }
        }
    }
    
    cout<<count.size()<<endl;
 
}