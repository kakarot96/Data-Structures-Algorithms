/* 
        Problem Statement:
        Sunderland capital consists of  n hills, forming a straight line. On each hill there was a
        watchman, who watched the neighbourhood day and night. In case of any danger the watchman 
        could make a fire on the hill. One watchman could see the signal of another watchman, if on
        the straight line connecting the two hills there was no hill higher than any of the two.  
        For example, for any two neighbouring watchmen it is true that the signal of one will be seen 
        by the other. An important characteristics of this watch system was the amount of pairs of 
        watchmen able to see each other's signals. You are to find this amount by the given heights of the hills.
        
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/capital-of-hills/        
*/


/* 
        Problem Statement:
        
        Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that
        a!=b and a is maximum and b is second maximum in that subarray.
        
        https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-shino-and-pairs/
        
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nge[1000005],nee[1000005],arr2[1000005];

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
void increasingOrder(ll arr[],int n){
    stack<ll> s;
    s.push(n-1);
    int count=1;
   arr2[n-1]=1;
    for(int i=n-2;i>=0;i--){
        int count2=0;bool x=true;
        while(s.empty()==false and arr[i]>arr[s.top()]){
                x=false;
                    s.pop();
                count2++;
            }
        if(s.empty())count=1;
         if(x){
            count++;
            arr2[i]=count;
            s.push(i);
            continue;
         }
         count=count-count2+1;
         if(count<1)count=1;
         arr2[i]=count;
         s.push(i);

    }

}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;cin>>n;
    ll arr[n+1];
    memset(arr2,0,sizeof(arr2));
    ll count=0;arr2[1000001]=1;
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp[1];arr[n]=-1;
    NGE(arr,n);
    NEE(arr,n);
    increasingOrder(arr,n);
    int tempCount=0;
    
    for(int i=0;i<n-1;i++){
        count+=arr2[i+1]- arr2[nge[i]] + 1;
  
    }

    cout<<count<<endl;
    
 
}