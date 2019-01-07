#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
//	string str;
//int t;cin>>t;


    int n,m;cin>>n>>m;
    pair<int,int> arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        arr1[i]=make_pair(temp,i);
    }
    for(int i=0;i<m;i++){
        int temp;cin>>temp;
        arr2[i]=make_pair(temp,i);
    }
    
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int count=0,flag=0;
    
    for(int i=0;i<m;i++){
     cout<<arr1[0].second<<" "<<arr2[i].second<<endl;
    }
    for(int i=1;i<n;i++){
        cout<<arr1[i].second<<" "<<arr2[m-1].second<<endl;
    }
    

	return 0;
}