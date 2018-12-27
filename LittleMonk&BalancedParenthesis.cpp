/* 
        Problem Statement:
        
        Given an array of positive and negative integers, denoting different types of parentheses. The positive numbers x(i) denotes
        opening parentheses of type x(i) and negative number -x(i) denotes closing parentheses of type .
        Open parentheses must be closed by the same type of parentheses. Open parentheses must be closed in the correct order, i.e., 
        never close an open pair before its inner pair is closed (if it has an inner pair). Thus, [1,2,-2,-1] is balanced, while [1,2,-1,-2] is not balanced.
        You have to find out the length of the longest subarray that is balanced.
        
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-monk-and-balanced-parentheses/
        
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int n;cin>>n;
    ll arr[n+1];
    int flag[n+1];flag[0]=0;
   
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        flag[i]=0;
    }
    
    stack<ll> s,idx;
s.push(arr[1]);
idx.push(1);
int len=0;
 for(int i=2;i<=n;i++){
     if(s.empty()){
         s.push(arr[i]);
         idx.push(i);
         continue;
     }
     
     if(arr[i] == -1*s.top() and arr[i]<0){
         int tempLen = i-idx.top()+1;
         if(flag[idx.top()-1]>0)tempLen+=flag[idx.top()-1];
         idx.pop();
         s.pop();
         flag[i] = tempLen;
         if(tempLen > len) len = tempLen;
         
     }
     else{
         s.push(arr[i]);
         idx.push(i);
     }
     
     
 }

 cout<<len<<endl;
}