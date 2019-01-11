#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("output.txt","w",stdout);
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
     }int flag=0;
     set<int> all;
    //  for(int i=0;i<10;i++)cout<<prime[i]<<" ";
    //  cout<<endl;
     vector<int> arr[1001]; int itr=0;
     for(int i=0;i<500;i++){
         for(int j=0;j<500;j++){
             if(i==j)continue;
             for(int k=1;k<30;k++){
                 //if(j<i and k==1)continue;
                 itr++;
                 if(pow(prime[i],k)*prime[j]<=1000000000){
                     all.insert(pow(prime[i],k)*prime[j]);
                     arr[i].push_back(pow(prime[i],k)*prime[j]);
                     arr[j].push_back(pow(prime[i],k)*prime[j]);
                 }
                 else{break;}
             }
             
         }
         sort(arr[i].begin(),arr[i].end());
     }
     
      int a=2,b=5;
      int n;cin>>n;
      set<int> done;
        done.insert(6);
        done.insert(10);
        
        // set<int> done :: iterator itr;
        // itr=done.find(10);
        // cout<<*itr<<endl;
        
        
     for(int i=0;i<n;i++){
         int flag2=0,idx=-1;
         for(int j=0;j<50000;j++){
            if(prime[j]==b){
              idx=j;
             break;
         }  
         }
        
         for(int j=0;j<arr[idx].size();j++){
             if(arr[idx][j]%a!=0){
                 
                 
                 for(int l=0;l<50000;l++){
                     bool x= done.find(arr[idx][j]) != done.end();
                     if(prime[l]!=a and prime[l]!=b and arr[idx][j]%prime[l]==0 and !x)
                     {  cout<<arr[idx][j]<<" ";
                         done.insert(arr[idx][j]);
                         a=b;
                         b=prime[l];
                         flag2=1;
                         break;
                     }
                 }
             }
             if(flag2)break;
         }
     }
     
    // freopen("output2.txt","w",stdout);
    // for(int i=0;i<100;i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    //  cout<<itr<<" is itr"<<endl;
    //  cout<<all.size()<<" all"<<endl;
    //  for(int i=0;i<100;i++){
    //      cout<<arr[i].size()<<"---->";
    //      while(!arr[i].empty()){
    //          cout<<arr[i].top()<<" ";
    //          arr[i].pop();
    //      }
    //      cout<<endl;
    //  }
    
    
    //  cout<<prime[25000]<<endl;;
    // for(int i=0;i<20;i++)
    // {
    //     cout<<prime[i]<<endl;
    // }
    // int t;scanf("%d",&t);
    // //  cout<<t<<endl;
    // while(t--){
        
        
        
    // }
}