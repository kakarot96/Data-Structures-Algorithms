#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{   int q;cin>>q;
    char c;
    queue< pair<int,int> > fir;
    queue< pair<int,int> > sec;
    queue< pair<int,int> > third;
    queue< pair<int,int> > fourth;
    int count=0;
    while(q--){
        cin>>c;
        if(c=='P'){
            cout<<"First"<<endl;
            while(fir.empty()==false){
                cout<<fir.front().first<<" ";
                fir.pop();
            }
            cout<<endl;
            cout<<"Second"<<endl;
            while(sec.empty()==false){
                cout<<sec.front().first<<" ";
                sec.pop();
            }
            cout<<endl;
        }
        if(c=='D'){
            cout<<"in D"<<endl;
            cout<<fir.front().second<<" "<<sec.front().second<<"  "<<third.front().second<<"  "<<fourth.front().second<<endl;
            if(fir.empty()==false and fir.front().second<sec.front().second and fir.front().second<third.front().second and fir.front().second<fourth.front().second){
                cout<<1<<" "<<fir.front().first;
                fir.pop();
            }
            else if(sec.empty()==false and sec.front().second<fir.front().second and sec.front().second<third.front().second and sec.front().second<fourth.front().second){
                cout<<2<<" "<<sec.front().first;
                sec.pop();
            }
            else if(third.empty()==false and third.front().second<sec.front().second and third.front().second<fir.front().second and third.front().second<fourth.front().second){
                cout<<3<<" "<<third.front().first;
                third.pop();
            }
            else if(fourth.empty()==false and fourth.front().second<sec.front().second and fourth.front().second<third.front().second and fourth.front().second<fir.front().second){
                cout<<4<<" "<<fourth.front().first;
                fourth.pop();
            }
        }
        if(c=='E'){
            count++;
            int roll;cin>>roll;
            int sch;cin>>sch;
            
            switch(sch){
                case 1: fir.push(make_pair(roll,count));
                break;
                case 2: sec.push(make_pair(roll,count));
                break;
                case 3: third.push(make_pair(roll,count));
                break;
                case 4: fourth.push(make_pair(roll,count));
                break;
            }
        }
    }
  
 
 
   
   
    return 0;
}