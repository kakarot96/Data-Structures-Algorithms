#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{   int q;cin>>q;
    char c;
    
    queue< int > queues[4];
    int status[4]={0},f=-1,s=-1,t=-1,fo=-1;
    bool flag[4]={0};
    queue<int> zz;
    
    int count=0;
    while(q--){
        cin>>c;
        if(c=='P'){
            int v=zz.front();zz.pop();
            int b=zz.front();zz.pop();
            int n=zz.front();zz.pop();
            int m =zz.front();zz.pop();
            cout<<v<<" "<<b<<" "<<n<<" "<<m<<endl;
            if(v>0)zz.push(v);if(b>0)zz.push(b);if(n>0)zz.push(n);if(m>0)zz.push(m);
        }
        if(c=='D'){
            //cout<<"in D"<<endl;
            
            cout<<zz.front()<<" "<<queues[zz.front()-1].front()<<endl;
            queues[zz.front()-1].pop();
            if(queues[zz.front()-1].empty()){
                // int temp=f;
                // f=s;s=t;t=fo;fo=temp;
                status[zz.front()-1]=0;
                zz.pop();
                if(zz.size()==1){
                    flag[1]=0;flag[2]=0;flag[3]=0;
                }
                else if(zz.size()==2){
                    flag[2]=0;flag[3]=0;
                }
                else if(zz.size()==3)flag[3]=false;
                else{
                    flag[1]=0;flag[2]=0;flag[3]=0;flag[0]=0;
                }
                
                
            }
            
        }
        if(c=='E'){
            count++;
            int sch;cin>>sch;
            int roll;cin>>roll;
            if(flag[0]==false){
                f=sch;
                zz.push(sch);
                status[sch-1]=1;
                
                flag[0]=true;
            }
            else if(flag[1]==false){
                if(status[sch-1]==0){
                s=sch;
                zz.push(sch);
                status[sch-1]=2;
                
                flag[1]=true;
                }
                
            }
            else if(flag[2]==false){
                if(status[sch-1]==0){
                t=sch;
                zz.push(sch);
                status[sch-1]=3;
                
                flag[2]=true;
                }
            }
            else if(flag[3]==false){
                if(status[sch-1]==0){
                fo=sch;
                zz.push(sch);
                status[sch-1]=4;
                
                flag[3]=true;}
            }
            
           queues[sch-1].push(roll); 
    
        }
    }
  
 
 
   
   
    return 0;
}