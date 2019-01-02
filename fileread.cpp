#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long long arr[1000001];
int n,count=0;cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==arr[i-1])count++;
}
    //getchar();
cout<<count<<" "<<n<<endl;
    return 0;
}