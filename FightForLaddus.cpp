/*
    Tuntun mausi challenged Bheem and his team to solve a problem. Raju, Chutki
    and Bheem are trying to solve this problem but are unable to do so. 
    As you are a good friend of Raju, he asks for your help.
    Given an array, For each element find the value of nearest element to the right 
    which is having frequency greater than as that of current element. If there does not
    exist an answer for a position, then print '-1'
    
    Please help Raju and his team to solve this problem to get the Laddus.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
int nge[100005];
void NGE(int arr[],int n){
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.empty() == false and arr[i]>arr[s.top()]){
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    while(s.empty() == false){
        nge[s.top()] = -1;
            s.pop();
    }
}

int main(){
    int count[100005];
int t;cin>>t;

while(t--){
    int n;cin>>n;
    int arr[n];int stack[n];
memset(count, 0, sizeof(count));
memset(nge, 0, sizeof(nge));
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {   
        stack[i]=count[arr[i]];
    }
    NGE(stack,n);

for(int i=0;i<n;i++){
        if(nge[i]<0)cout<<-1<<" ";
        else cout<<arr[nge[i]]<<" ";
 }   
 cout<<endl; 

}
}