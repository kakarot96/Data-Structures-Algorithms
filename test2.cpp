#include <bits/stdc++.h>
using namespace std;

bool check(int ina, int mena, int deca) {
    int gc1 = __gcd(ina, mena);
    int gc2 = __gcd(mena, deca);
    if (gc1 > 1 && gc2 > 1 && __gcd(ina, __gcd(mena, deca)) == 1)
        return true;
    return false;
}
int main(int argc, char const *argv[])
{
    freopen("output.txt", "w", stdout);
    int flag=0,count=0;
    bool arr[100000];
    memset(arr,false,sizeof(arr));
  arr[6]=true;arr[10]=true;
int a=6,b=10,c;
int arr2[100000];int idx=0;
for(int i=0;i<50000;i++){
    flag=0;
   // cout<<"---------------------------"<<i<<endl;
    for(int j=6;j<500000;j++){
        if(flag)continue;
        if(arr[j])continue;

        if(__gcd(a,b)>1 and __gcd(b,j)>1 and __gcd(a,__gcd(b,j))==1){
            cout<<j<<endl;
            arr2[idx]=j;idx++;
            c=a;
            a=b;
            b=j;
            flag=1;
            arr[j]=true;
        }
    }
    if(flag==0){
        cout<<b<<" is wrong"<<endl;count++;
        idx--;
        b=a;
        a=c;
        
    }
}
    for(int i=0;i<10000;i++)cout<<arr2[i]<<" ";
//   for(int i=6;i<500;i++){
//       flag=0;
//       if(arr[i]==true)continue;
//       for(int j=6;j<500;j++){
//           if(arr[j]==true)continue;
//           for(int k=6;k<500;k++){
//               if(arr[k]==true)continue;
//               if(flag)continue;
//               if(__gcd(i,j)>1 and __gcd(j,k)>1 and __gcd(i,__gcd(j,k))==1){
//                   cout<<i<<" "<<j<<" "<<k<<endl;
//                   flag=1;
//                   arr[i]=true;arr[j]=true;arr[k]=true;
//               }
              
//           }
//           if(flag)continue;
//       }
//   }
    return 0;
}
