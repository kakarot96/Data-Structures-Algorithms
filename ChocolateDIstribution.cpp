#include<bits/stdc++.h>
using namespace std;
typedef pair< int, int > pp;

struct Compare { 
    bool operator()( pp const& p1, pp const& p2) 
    { 
        if(p1.first<p2.first)
        return false;
        return true;
    } 
};

struct Compare2 { 
    bool operator()( pp const& p1, pp const& p2) 
    { 
        if(p1.first<p2.first)
        return false;
        return true;
    } 
};

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int totalReq=0,count=0;
        //priority_queue<int, vector<int>, greater<int> > pq;
        int q,k;cin>>q>>k;
        priority_queue<pp, vector<pp> , Compare > que;
        queue< pp  > pq[q];
        long long int sum=0;
        for(int i=0;i<q;i++){
           int n;cin>>n;
           count+=n;
            while(n--){
                int num;
                cin>>num;
                totalReq+=num;
                pq[i].push(make_pair(num,i));
            } 
            que.push(pq[i].front());
        }
      
      
    //   for(int i=0;i<q;i++){
    //       cout<<"Printing queue "<<i<<endl;
    //       while(!pq[i].empty()){
    //           cout<<pq[i].top().first<<"  "<<pq[i].top().second<<endl;
    //           pq[i].pop();
    //       }
    //   }
      
    //   while(!queue.empty()){
    //       cout<<queue.top().first<<" "<<queue.top().second<<endl;
    //       queue.pop();
    //   }
      
      if(k>count){
          cout<<totalReq<<endl;
          continue;
      }
      
      for(int i=0;i<k;i++){
          int topFirst = que.top().first;
          int topSecond = que.top().second;
          que.pop();
          sum+=topFirst;
             cout<<sum<<"   "<<que.top().first<<endl;
          pq[topSecond].pop();
          if(!pq[topSecond].empty())
          que.push(make_pair(pq[topSecond].front().first,pq[topSecond].front().second));
      }
        
        
        cout<<endl;
        cout<<sum<<endl;
    }
}