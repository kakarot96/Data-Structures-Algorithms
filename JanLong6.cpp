#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("output.txt","w",stdout);
    bool primes[5000000]; int prime[50000];int count=0;
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
    //  cout<<prime[25000]<<endl;;
    // for(int i=0;i<20;i++)
    // {
    //     cout<<prime[i]<<endl;
    // }
    int t;scanf("%d",&t);
    //  cout<<t<<endl;
    while(t--){
        int n;cin>>n; int ans[n];
        // cout<<n<<endl;
        ans[0]=6;ans[1]=10;
        int c2=1,c3=2;
        for(int i=0;i<n-2;i++){
          
                
            if(i%4==1 || i%4==0 ){
                ans[i]=2*prime[c2];c2++;
            }
            else{
                
                ans[i]=3*prime[c3];c3++;
            }
        }
        if(n==3)ans[n-1]=15;
        if(n%4==0 and n>3){
            ans[n-2]=3*prime[c3]*prime[c3+1];c3++;
            ans[n-1]=prime[c3]*prime[c3+1];
            ans[0]*=prime[c3+1];
        }
        if(n%4==2 and n>3){
            ans[n-2]=2*prime[c2]*prime[c2+1];c2++;
            ans[n-1]=prime[c2]*prime[c2+1];
            ans[0]*=prime[c2+1];
        }
        if(n%4==1 and n>3){
            ans[n-2]=3*prime[c3];
            if (c2 == c3) c2++;
            ans[n-1]=prime[c2]*prime[c3];ans[0]*=prime[c2];
        }
         if(n%4==3 and n>3){
            ans[n-2]=2*prime[c2];
            if (c2 == c3) c3++;
            ans[n-1]=prime[c2]*prime[c3];ans[0]*=prime[c3];
        }
     
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;
    
        }
}