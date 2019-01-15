#include "bits/stdc++.h"
#define ll long long int;
using namespace std;
typedef pair< int, pair< int, int> > pp;
struct CompareHeight { 
    bool operator()( pp const& p1, pp const& p2) 
    { 
        if(p1.first<p2.first || (p1.first==p2.first and p1.second.first>p2.second.first))
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

bool sortbysec(const pair<long int,long int> &a, 
              const pair<long int,long int> &b) 
{ 
    return (a.second < b.second); 
}


int main()
{   int h,c,q;cin>>h>>c>>q;
    priority_queue< pp, vector< pp >, CompareHeight> pq;
    
    for(int i=0;i<c;i++){
        int st,et,hgt;
        cin>>st>>et>>hgt;
        pq.push(make_pair(st,make_pair(hgt,0)));
        pq.push(make_pair(et,make_pair(hgt,1)));
        
    }
    // Check queue
    // while(!pq.empty()){
    //     pp top = pq.top();
    //     cout<<top.first<<" "<<top.second.first<<" "<<top.second.second<<endl;
    //     pq.pop();
    // }
    
    
    
    multiset<int, greater <int> > maxHeight;
    multiset <int> :: iterator itr; 

    vector< pair< int , int > > val;
    int maxH=-1;
    while(!pq.empty()){
        pp top = pq.top();
        if(top.second.second==0){
           // cout<<"Line Start with height "<<top.second.first<<endl;
          if(maxHeight.empty() || top.second.first>*maxHeight.begin())val.push_back(make_pair(top.first,top.second.first)); 
          else{
              val.push_back(make_pair(top.first,*maxHeight.begin()));
              }
          maxHeight.insert(top.second.first);
        }
        else{
            int temp = *maxHeight.begin(); 
            //cout<<"Line End with height "<<temp<<endl;
            val.push_back(make_pair(top.first,temp));
            maxHeight.erase(maxHeight.find(top.second.first));
        }
        pq.pop();
        
    }
    
    
    for(int i=0;i<val.size();i++){
      cout<<val[i].first<<" "<<val[i].second<<endl; 
    }
      cout << endl;
    
}
