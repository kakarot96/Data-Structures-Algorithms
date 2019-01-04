#include <bits/stdc++.h>
using namespace std;
bool checkNot(string str) 
{   string word = ""; 
   for (auto x : str) 
   { 
       if (x == ' ') 
       { 
           if(word=="not")
           word="";
           return true; 
       } 
       else
       { 
           word = word + x; 
       } 
   }  
   return false; 
} 
int main() {
	// your code goes here
	string str;
int t;cin>>t;

 getline(cin, str);
while(t--){
    
     getline(cin, str); int flag=0;
   // cout<<str<<endl;
    
    if(checkNot(str))cout<<"Real Fancy"<<endl;
    else cout<<"regularly fancy"<<endl;
}
	return 0;
}
