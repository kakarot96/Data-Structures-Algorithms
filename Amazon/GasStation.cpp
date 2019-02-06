#include<bits/stdc++.h>
using namespace std;
int canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
   if(A.size()==1)return 0;
     for(int i=0;i<A.size();i++){
        int sum=0,flag=1;
        
        for(int j=0;j<A.size();j++){
            sum+=A[(j+i)%A.size()];
           // cout<<i<<" "<<j<<" "<<sum<<endl;
            if(sum-B[(j+i)%A.size()]<=0){
                flag=0;
                break;
            }
            sum-=B[(j+i)%A.size()];
            
        }
        if(flag)return i;
        
    }
    return -1;
}

int main(){
    int n;cin>>n;
    vector<int> A,B;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        A.push_back(num);
    }
    for(int i=0;i<n;i++){
        int num;cin>>num;
        B.push_back(num);
    }
    int ans = canCompleteCircuit(A,B);
    cout<<ans;
}