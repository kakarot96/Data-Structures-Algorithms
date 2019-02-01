#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int sum=0,num;
        for(int i=0;i<n;i++){
                cin>>num;
                sum+=num-1;
        }
        cout<<sum+1<<endl;
    }
}