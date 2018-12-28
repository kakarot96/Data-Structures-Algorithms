/*
    PROBLEM STATEMENT:
    
    www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-order-of-phoenix/
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
multiset<ll, greater <ll> > small;


bool specialWand(vector<ll> &first, multiset<ll> stacks[],int n){
    multiset <ll> :: iterator upper;
    ll smallest = *(--small.end());
    for(int i=1;i<n;i++){
         upper = stacks[i].upper_bound(smallest);
        if(*upper <= smallest)
        return false;
        else{
            smallest = *upper;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
int n;scanf("%d",&n);
vector<ll> first;
multiset<ll>  stacks[n+1];  
multiset <ll> :: iterator sitr; 
vector<ll>    :: iterator vitr;


// TAKING INPUT
for(int i=0;i<n;i++){
    if(i==0){
        ll num;scanf("%lld",&num);//cin>>num;
        for(int j=0;j<num;j++){
            ll temp;scanf("%lld",&temp);//cin>>temp;
            first.push_back(temp);
            small.insert(temp);
        }
    }
    else{
        int num;scanf("%lld",&num);
        for(int j=0;j<num;j++){
            ll temp;scanf("%lld",&temp);
            stacks[i].insert(temp);
        }
    }
}

    
int q,flag=0;scanf("%d",&q);
while(q--){
    scanf("%d",&flag);
    if(flag==1){
       // cout<<"Insert"<<endl;
        ll k,h;scanf("%lld%lld",&k,&h);
        if(k==1){
            
            first.push_back(h);
            small.insert(h);
        }
        else{
            stacks[k-1].insert(h);
        }
    }
    else if(flag==2){
        //specialWand(first,stacks,n);
        if(specialWand(first,stacks,n)){
            cout<<"YES"<<endl;
            
        }
        else
        cout<<"NO"<<endl;
        
    }
    else if(flag == 0){
        ll k;scanf("%lld",&k);
        if(k==1){
            if(!first.empty()){
                
                small.erase(small.find((first[first.size()-1])));
                first.pop_back(); 
            }
          
        }
        else{
           if(!stacks[k-1].empty()){
            
            stacks[k-1].erase(--stacks[k-1].end());
        } 
        }
        
    }
}

}