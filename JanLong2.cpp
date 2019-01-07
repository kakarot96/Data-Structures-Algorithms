/*
    Problem Statement:
    Bob and Alice are playing a game with the following rules:
    Initially, they have an integer sequence A1,A2,…,AN; in addition, Bob has a lucky number a and Alice has a lucky number b.
    The players alternate turns. In each turn, the current player must remove a non-zero number of elements from the sequence; 
    each removed element should be a multiple of the lucky number of this player. If it is impossible to remove any elements, 
    the current player loses the game. It is clear that one player wins the game after a finite number of turns. Find the winner 
    of the game if Bob plays first and both Bob and Alice play optimally.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
//	string str;
int t;cin>>t;

while(t--){
    int n,a,b;cin>>n>>a>>b;
    int flag=0,countA=0,countB=0;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        if(num%a==0 and num%b==0)flag=1;
        else if(num%a==0)countA++;
        else if(num%b==0)countB++;
        
        //cout<<countA<<" "<<countB<<endl;
    }
    if(flag==1)countA++;
   // cout<<countA<<" "<<countB<<endl;
    if(countA>countB)cout<<"BOB"<<endl;
    else cout<<"ALICE"<<endl;
}
	return 0;
}