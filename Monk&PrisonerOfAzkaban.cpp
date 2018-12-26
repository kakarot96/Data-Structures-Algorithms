/* https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-prisoner-of-azkaban */





#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    
int n;
cin>>n;
long long int num[n],x[n],y[n],idx=0;
x[0]=-1;
y[n-1]=-1;


    
    // freopen("input.txt","r",stdin);//redirects standard input
    // freopen("output.txt","w",stdout);//redirects standard output
for(int i=0;i<n;i++){
    cin>>num[i];
}
stack<long long int> s,rs;
s.push(0);
rs.push(n-1);

for(int i=1;i<n;i++){
    
    while(s.empty() == false and num[i]>num[s.top()]){
       // printf("in while for i= %d",i);
        y[s.top()] = i+1;
        s.pop();
    }
    
    s.push(i);
}
//cout<<"Stack is"<<endl;
while(s.empty() == false){
    //cout<<num[s.top()]<<" ";
    y[s.top()] = -1;
        s.pop();
}

for(int i = n-2;i>=0;i--){
  while(rs.empty() == false and num[i]>num[rs.top()]){
        x[rs.top()] = i+1;
        rs.pop();
    }
    
    rs.push(i);
}

while(rs.empty() == false){
    //cout<<num[s.top()]<<" ";
    x[rs.top()] = -1;
        rs.pop();
}

cout<<endl;
for(int i=0;i<n;i++){
    cout<<x[i]+y[i]<<" "; 
}
// cout<<endl;
// for(int i=0;i<n;i++){
//     cout<<y[i]<<" ";
// }

}