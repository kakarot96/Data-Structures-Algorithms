#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    
int n;
cin>>n;
long long int num[n],x[n],y[n],idx=0;
x[0]=-1;
y[n-1]=-1;


    
    freopen("input.txt","r",stdin);//redirects standard input
    freopen("output.txt","w",stdout);//redirects standard output
for(int i=0;i<n;i++){
    cin>>num[i];
}

long long int max = -1,max2=-1;

for(int i=1;i<n;i++){
    
    if(num[i-1]>num[i]){
        x[i]=i;
        if(num[i]>max)
        max=num[i];
    }
    else{
        if(num[i]>max){
            x[i]=-1;
            max=num[i];
        }
        else
        x[i]=x[i-1];
    }
 
}
for( int i = n-2 ; i>=0 ; i--){
    if(num[i+1]>num[i]){
        y[i]=i+2;
        if(num[i]>max2)
        max=num[i];
    }
    else{
        if(num[i]>max2){
            y[i]=-1;
            max2=num[i];
        }
        
        else
        y[i]=y[i+1];
    }
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