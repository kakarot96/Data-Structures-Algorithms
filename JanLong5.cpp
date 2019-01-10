/*
    Problem Statement:
    You are given an empty grid with N rows (numbered 1 through N) and M columns (numbered 1 through M).
    You should fill this grid with integers in a way that satisfies the following rules:
    For any three cells c1, c2 and c3 such that c1 shares a side with c2 and another side with c3, the 
    integers written in cells c2 and c3 are distinct.
    Let's denote the number of different integers in the grid by K; then, each of these integers should lie 
    between 1 and Kinclusive. K should be minimum possible.
    Find the minimum value of K and a resulting (filled) grid. If there are multiple solutions, you may find
    any one.
    https://www.codechef.com/JAN19B/problems/DIFNEIGH
*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>m>>n;
        int k=0;
        if(n==1 and m==1){
            k=1;
            cout<<k<<endl;
            cout<<1<<endl;
        }
        else if(m==1 and n>1){
            if(n==2)cout<<1<<endl;
            else
            cout<<2<<endl;
            for(int i=1;i<=n;i++){
                if(i%4==1 || i%4==2)cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
        }
        else if(m>1 and n==1){
            if(m==2)cout<<1<<endl;
            else
            cout<<2<<endl;
            for(int i=1;i<=m;i++){
                if(i%4==1 || i%4==2)cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        else if(m==2 and n==2){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(m==2 and n>2){
            cout<<3<<endl;
            for(int i=1;i<=n;i++){
                if(i%3==1)cout<<1<<" ";
                else if(i%3==2)cout<<2<<" ";
                else cout<<3<<" ";
            }
            cout<<endl;
            for(int i=1;i<=n;i++){
                if(i%3==1)cout<<1<<" ";
                else if(i%3==2)cout<<2<<" ";
                else cout<<3<<" ";
            }
            cout<<endl;
        }
        else if(m>2 and n==2){
            cout<<3<<endl;
            for(int i=1;i<=m;i++){
                if(i%3==1)cout<<1<<" "<<1<<endl;
                else if(i%3==2)cout<<2<<" "<<2<<endl;
                else cout<<3<<" "<<3<<endl;
            }
        }
        else{
            cout<<4<<endl;
            for(int i=1;i<=m;i++)
            {
                for(int j=1;j<=n;j++){
                    if(i%4==1){
                        if(j%4==1 || j%4==2)cout<<2<<" ";
                        else cout<<1<<" ";
                    }
                    else if(i%4==2){
                        if(j%4==1 || j%4==2)cout<<4<<" ";
                        else cout<<3<<" ";
                    }
                    else if(i%4==3){
                        if(j%4==1 || j%4==2)cout<<1<<" ";
                        else cout<<2<<" ";
                    }
                    else if(i%4==0){
                        if(j%4==1 || j%4==2)cout<<3<<" ";
                        else cout<<4<<" ";
                    }
                    
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
