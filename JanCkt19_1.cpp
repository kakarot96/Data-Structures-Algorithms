#include<bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int> A,B;
    multiset<long long int> :: iterator itr;

    for(int i=0;i<n;i++){
        long long int num;cin>>num;
        A.push_back(num);
    }
    for(int i=0;i<n;i++){
        long long int num;cin>>num;
        B.push_back(num);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    long long sum=0;
     for(int i=0;i<n;i++){
         sum+= abs(A[i]-B[i]);
         sum%=MOD;
      //  long long int num;cin>>num;
    //    B.push_back(num);
    }
    cout<<sum<<endl;
}