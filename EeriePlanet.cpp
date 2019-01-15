#include "bits/stdc++.h"
#define ll long long int;
using namespace std;

typedef pair< int, pair< int, int > > pi;
bool sortbysec(const pair<long int,long int> &a, 
              const pair<long int,long int> &b) 
{ 
    return (a.second < b.second); 
}


int main()
{   int h,c,q;cin>>h>>c>>q;
    priority_queue< pi , vector< pi >, greater<pi> >pq;//vector< pair< long int,long int > >,compare > pq;
    for(int i=0;i<c;i++){
        int st,et,hgt;cin>>st>>et>>hgt;
        pq.push(make_pair(st,make_pair(hgt,0)));
        pq.push(make_pair(et,make_pair(hgt,1)));
        
    }

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second.first<<" "<<pq.top().second.second<<endl;
        pq.pop();
    }
// while(q--){
//    long int num;cin>>num;
//     cout<<lower_bound(vq.begin(),vq.end(),num)<<endl;
    
// }

    // while(!pq.empty())
    // {
    //     pair<int, int> w = pq.top();
    //     vq.push_back(w);
    //     cout << w.first << " " << w.second << endl;;
    //     pq.pop();
    // }
}
