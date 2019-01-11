#include<bits/stdc++.h>
using namespace std;
int main(){
    //  freopen("output.txt","w",stdout);
    bool primes[5000000]; int prime[50010];int count=0;
    memset(primes,true,sizeof(primes));
     
     for(int i=2;i<5000000;i++){
         if(primes[i]==true){
             prime[count]=i;
             count++;
             for(int j=2;j*i<5000000;j++){
                 primes[i*j]=false;
             }
         }
     }
    
    int t;scanf("%d",&t);
    int arr[50001];
    while(t--){

    for(int i=0;i<50000;i++){
        if(i%3==0)arr[i]=6;
        else if(i%3==1)arr[i]=15;
        else arr[i]=10;
    }
        int n;cin>>n;
       if (n%3 == 1) {arr[n-1] /= 6; arr[n-1]*=prime[n+4];arr[n-2]*=prime[n+4];}
       if (n%3 == 2) {arr[n-1] /= 3; arr[n-2] /= 3; arr[n-1]*=prime[n+3]; arr[n-2]*=prime[n+3];}
       for(int i=0;i<n-2;i++){
           cout<<arr[i]*prime[i+3]<<" ";
       }
       cout<<arr[n-2]<<" ";
        cout<<arr[n-1]*7<<endl;
    }
}