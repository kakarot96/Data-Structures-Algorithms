#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{   int n,x;cin>>n>>x;
    queue< pair<int,int> > que;
    for(int i=1;i<=n;i++){
        int temp;cin>>temp;
        que.push(make_pair(temp,i));
    }

    pair<int,int> arr[x];
    
    for(int i=0;i<x;i++){
        int count=0;
        for(int j=0;j<x;j++){
           
            if(que.empty()==false){
                 arr[j].first = que.front().first;
                 arr[j].second=que.front().second;
                 count++;
            que.pop();
            }
            else{
                break;
            }
           
        }
      
        int max=-1;int idx=-1;
        for(int j=0;j<count;j++){
            if(arr[j].first>max){
                max=arr[j].first;
                idx=j;
                
            }
        }
      
        cout<<arr[idx].second<<" ";
        for(int j=0;j<count;j++){
            if(j==idx)continue;
            int a =0;
            if(arr[j].first-1<=0)arr[j].first=1;
            que.push(make_pair(arr[j].first-1,arr[j].second));
        }
    }
 
 
   
   
    return 0;
}