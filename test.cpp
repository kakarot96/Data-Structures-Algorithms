#include <bits/stdc++.h>
using namespace std;

bool check(int ina, int mena, int deca) {
    int gc1 = __gcd(ina, mena);
    int gc2 = __gcd(mena, deca);
    if (gc1 > 1 && gc2 > 1 && __gcd(ina, __gcd(mena, deca)) == 1)
        return true;
    return false;
}
int main(int argc, char const *argv[])
{
    freopen("output.txt", "r", stdin);
   int t, tt=0; cin>>t;
   while (t--) {
       tt ++;
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for (int i=0; i<n; i++) {
            if (!check(a[i], a[(i+1)%n], a[(i+2)%n])) {
                cout<<tt<<" "<<i<<endl;
            }
        } 
    }
    return 0;
}
