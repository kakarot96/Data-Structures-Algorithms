/*
    Problem Statement:
    
    Chef was reading some quotes by great people. Now, he is interested in classifying all the fancy quotes he knows. He thinks that all
    fancy quotes which contain the word "not" are Real Fancy; quotes that do not contain it are regularly fancy.
    You are given some quotes. For each quote, you need to tell Chef if it is Real Fancy or just regularly fancy.
*/

#include <bits/stdc++.h>
using namespace std;
bool checkNot(string str) 
{   string word = ""; 
   for (auto x : str) 
   { 
       if (x == ' ') 
       { 
           transform(word.begin(), word.end(), word.begin(), ::tolower);
            //cout<<"word is "<<word<<endl;
           if(word.compare("not")==0 ){
             
            word="";
           return true;  
           }
           else word="";

       } 
       else
       { 
           word = word + x;
       } 
   }
              transform(word.begin(), word.end(), word.begin(), ::tolower);
    if(word.compare("not")==0 ){
           return true;  
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
    if(checkNot(str))cout<<"Real Fancy"<<endl;
    else cout<<"regularly fancy"<<endl;
}
	return 0;
}