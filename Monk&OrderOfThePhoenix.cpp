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
multiset<ll, greater <ll> > small;


bool specialWand(vector<ll> first, multiset<ll>  stacks[],int n){
    vector<ll>    :: iterator vitr;
    multiset <ll> :: iterator upper;
    ll smallest = *(--small.end());
    for(int i=1;i<n;i++){
        upper = upper_bound(stacks[i].begin(), stacks[i].end(), smallest);
        // cout<<"Smallest is "<<smallest<<endl;
        //     cout<<"Upper is "<<*upper<<endl;
        if(*upper <= smallest)
        return false;
        else{
            smallest = *upper;
        }
    }
    return true;
}
int main(){
int n;cin>>n;
vector<ll> first;
multiset<ll>  stacks[n+1];  
multiset <ll> :: iterator sitr; 
vector<ll>    :: iterator vitr;


// TAKING INPUT
for(int i=0;i<n;i++){
    if(i==0){
        ll num;cin>>num;
        for(int j=0;j<num;j++){
            ll temp;cin>>temp;
            first.push_back(temp);
            small.insert(temp);
        }
    }
    else{
        int num;cin>>num;
        for(int j=0;j<num;j++){
            ll temp;cin>>temp;
            stacks[i].insert(temp);
        }
    }
}

    
int q,flag=0;cin>>q;
while(q--){
    cin>>flag;
    if(flag==1){
       // cout<<"Insert"<<endl;
        ll k,h;cin>>k>>h;
        if(k==1){
            
            first.push_back(h);
            small.insert(h);
        }
        else{
            stacks[k-1].insert(h);
        }
    }
    else if(flag==2){
        if(specialWand(first,stacks,n)){
            cout<<"YES"<<endl;
            
        }
        else
        cout<<"NO"<<endl;
        
    }
    else if(flag == 0){
        ll k;cin>>k;
        if(k==1){
            if(!first.empty()){
                // cout<<"End element is "<<*(--first.end())<<endl;
                // cout<<"found num is "<<*small.find(*(--first.end()));
                small.erase(small.find(*(--first.end())));
                
                 first.erase (--first.end()); 
            }
          //cout<<"erase"<<endl;
        }
        else{
           if(!stacks[k-1].empty()){
            //cout<<"erase"<<endl;
            stacks[k-1].erase(--stacks[k-1].end());
        } 
        }
        
    }
}













// FOR PRINTING ALL ROWS
    // for(vitr = first.begin(); vitr != first.end() ; ++vitr){
    //     cout<<'\t'<<*vitr;
    // }
    // cout<<endl;
    // for(int i=1;i<n;i++){
    //     for ( sitr = stacks[i].begin(); sitr != stacks[i].end(); ++sitr) 
    // { 
    //     cout << '\t' << *sitr; 
    // } 
    // cout<<endl;
    // }
    
    
    
    
    
}