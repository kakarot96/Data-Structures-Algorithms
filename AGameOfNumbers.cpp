/* 
        Problem Statement:
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3
        
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nge[40000],nse[40000];

void NGE(ll arr[],int n){
    stack<ll> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.empty() == false and arr[i]>arr[s.top()]){
            nge[s.top()] = i+1;
            s.pop();
        }
        s.push(i);
    }
    
    while(s.empty() == false){
        nge[s.top()] = -1;
            s.pop();
    }
}

void NSE(ll arr[],int n){
    stack<ll> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.empty() == false and arr[i]<arr[s.top()]){
            nse[s.top()] = i+1;
            s.pop();
        }
        s.push(i);
    }
    
    while(s.empty() == false){
        nse[s.top()] = -1;
            s.pop();
    }
}

int main(){
    int n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    NGE(arr,n);
    NSE(arr,n);
    
    for(int i=0;i<n;i++){
        if(nge[i]!=-1 and nse[nge[i]-1]!=-1)cout<<arr[nse[nge[i]-1]-1]<<" ";
        else cout<<-1<<" ";
    }
 
}