#include<bits/stdc++.h>
using namespace std;
string visited[1000][1000];
string lcs(string s1,string s2){
    
    string ans="";
        
    if(s1.length()==0 || s2.length()==0)return "";
    else if(s1[0]==s2[0]){
        ans+=s1[0]+ lcs(s1.substr(1,s1.length()-1) , s2.substr(1,s2.length()-1));
    }
    else{
        string s3= lcs(s1.substr(1,s1.length()-1) ,s2);
        string s4= lcs(s1 ,s2.substr(1,s2.length()-1));
        if(s3.length()>s4.length()) ans=s3;
        else ans=s4;
    }
    
    
    return ans;
}
int main(){
clock_t begin, end;

double time_spent;


begin = clock();
string s1,s2;
   cin>>s1>>s2;
   cout<<lcs(s1,s2); 
end = clock();

time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("\nTime Taken %lf", time_spent);


   
}