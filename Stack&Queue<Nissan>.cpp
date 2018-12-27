/* 
        Problem Statement:
        
        You are given a stack of N integers such that the first element represents the top of the stack and the last element represents the bottom of the stack. 
        You need to pop at least one element from the stack. At any one moment, you can convert stack into a queue. The bottom of the stack represents the front of the queue.
        You cannot convert the queue back into a stack. Your task is to remove exactly K elements such that the sum of the K removed elements is maximised.
        
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/staque-1-e790a29f/
        
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    ll arr[n+1],que[n+1],stack[n+1],ans[n+2];
    
    for(int i=1;i<=n;i++)cin>>arr[i];
    stack[1]=arr[1];
    que[n]=arr[n];
    for(int i=2;i<=n;i++){
        stack[i] = arr[i]+stack[i-1];
        que[n+1-i]= arr[n+1-i] + que[n+2-i];
    }
    ll max = -1;
    for(int i=1;i<=k;i++){
        if(i<k)
        ans[i] = stack[i] + que[n-(k-i)+1];
        else if(i==k)
        ans[i] = stack[k];
        
        if(ans[i]>max)max=ans[i];
    }
    
    cout<<max<<endl;
}