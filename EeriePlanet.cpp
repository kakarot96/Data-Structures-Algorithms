#include "bits/stdc++.h"
#define ll long long int;
using namespace std;
bool sortbysec(const pair<long int,long int> &a, 
              const pair<long int,long int> &b) 
{ 
    return (a.second < b.second); 
}
// struct compare
// {
//     bool operator()(pair<long int, long int> p1,pair<long int,long int> p2) {
//         if(p1.second == p2.second)
//             return p1.first > p2.first;
//         else 
//             return p1.second > p2.second;    // ***EDIT***
//     }
// };

int main()
{   vector< pair<long int,long int> >vq;
    //priority_queue< pair<long int,long int>,vector< pair< long int,long int > >,compare > pq;
    // pq.push(make_pair(1,10));
    // pq.push(make_pair(5,10));
    // pq.push(make_pair(7,7));
    // pq.push(make_pair(9,7));
    //     pq.push(make_pair(2,8));
    // pq.push(make_pair(10,8
    vq.push(make_pair(1,10));
    vq.push(make_pair(5,10));
    vq.push(make_pair(7,7));
    vq.push(make_pair(9,7));
    vq.push(make_pair(2,8));
    vq.push(make_pair(10,8));
    sort(vect.begin(), vect.end(), sortbysec); 

int q;cin>>q;
while(q--){
   long int num;cin>>num;
    cout<<lower_bound(vq.begin(),vq.end(),num)<<endl;
    
}

    // while(!pq.empty())
    // {
    //     pair<int, int> w = pq.top();
    //     vq.push_back(w);
    //     cout << w.first << " " << w.second << endl;;
    //     pq.pop();
    // }
}
