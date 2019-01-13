#include<bits/stdc++.h>
using namespace std; 

bool checkSum(int arr[], int n, int sum) 
{ 
    bool tab[n + 1][sum + 1];
	for (int j = 1; j <= sum; j++)
		tab[0][j] = false;
	
    for (int i = 0; i <= n; i++)
		tab[i][0] = true;

	for (int i = 1; i <= n; i++)
	{   for (int j = 1; j <= sum; j++)
		{
            if (arr[i - 1] > j)
				tab[i][j] = tab[i - 1][j];
			else
				tab[i][j] = tab[i - 1][j] || tab[i - 1][j - arr[i - 1]];
		}
	}
	return tab[n][sum];
} 
  
int main() 
{ 
    int t;cin>>t;
    while(t--){
       // memset(memo,false,sizeof(memo));
        int n,x;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        cin>>x;
        if (checkSum(arr, n, x) == true) 
        cout<<"YES"<<endl; 
        else
        cout<<"NO"<<endl; 
        
    }
  return 0; 
} 