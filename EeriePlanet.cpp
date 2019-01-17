#include "bits/stdc++.h"
#define ll long long int;
using namespace std;
typedef pair< int, pair< int, int> > pp;
struct CompareHeight { 
    bool operator()( pp const& p1, pp const& p2) 
    { 
        if(p1.first<p2.first || (p1.first==p2.first and p1.second.first>p2.second.first) || (p1.first==p2.first and p1.second.first==p2.second.first and p1.second.second<p2.second.second))
        return false;
        return true;
    } 
};

struct Compare { 
    bool operator()( pair<int , int> const& p1, pair<int , int> const& p2) 
    { 
        if(p1.first<p2.first)
    return false;
    return true;
    } 
};

bool sortbysec(const pair< int, int> &a, 
              const pair< int, int> &b) 
{ 
    return (a.first < b.first); 
}


int main()
{   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int h,c,q;cin>>h>>c>>q;
    priority_queue< pp, vector< pp >, CompareHeight> pq;
    
    for(int i=0;i<c;i++){
        int st,et,hgt;
        cin>>hgt>>st>>et;
        pq.push(make_pair(st,make_pair(hgt,0)));
        pq.push(make_pair(et,make_pair(hgt,1)));
        
    }

    multiset<int, greater <int> > maxHeight;
    multiset <int> :: iterator itr; 

    vector< pair< int , int > > val,numActive;
    int maxH=-1,active=0;
    while(!pq.empty()){
         pp top = pq.top();
        if(top.second.second==0){
          // cout<<"Line Start with height "<<top.second.first<<endl;
          if(maxHeight.empty() || top.second.first>*maxHeight.begin()){
              val.push_back(make_pair(top.first,top.second.first));
              //numActive.push_back(make_pair(top.first,++active));
              
          } 
          else{
              val.push_back(make_pair(top.first,*maxHeight.begin()));
              }
              active++;
          numActive.push_back(make_pair(top.first,active));
          maxHeight.insert(top.second.first);
        }
        else{
            
            int temp = *maxHeight.begin(); 
            //cout<<"Line End with height "<<temp<<endl;
            val.push_back(make_pair(top.first,temp));
             numActive.push_back(make_pair(top.first,--active));
             itr = maxHeight.find(top.second.first);
            maxHeight.erase(itr);
        }
       // cout<<top.first<<" "<<top.second.first<<" "<<top.second.second<<endl;
         pq.pop();
    }
    
    while(q--){
        int h,t;cin>>h>>t;
        
        if((*(--lower_bound(numActive.begin(),numActive.end(),make_pair(t,0), sortbysec))).second<=0 and (*lower_bound(numActive.begin(),numActive.end(),make_pair(t,0), sortbysec)).first>t){
          cout<<"YES"<<endl;
          continue;
            }
        
        int ans = (*lower_bound(val.begin(),val.end(),make_pair(t,0), sortbysec)).second;
        int ans2 = (*(--lower_bound(val.begin(),val.end(),make_pair(t,0), sortbysec))).second;
        
        
       // cout<<ans<<"  "<<ans2<<endl;
        if((*(--lower_bound(numActive.begin(),numActive.end(),make_pair(t,0), sortbysec))).second>0 and (*lower_bound(val.begin(),val.end(),make_pair(t,0), sortbysec)).first>t){
            if(ans2>=h)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        continue;
        }
        if(ans>=h)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    
    
}
