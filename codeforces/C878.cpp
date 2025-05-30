#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
     int main(){
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            long long x,y;
            cin>>x>>y;
            long long numadd=n/x;
            long long numsub=n/y;
            long long lcm=(x*y)/__gcd(x,y);
            long long comm=n/lcm;
            numadd-=comm;
            numsub-=comm;
            long long pos=(n*(n+1))/2-((n-numadd)*(n-numadd+1))/2;
            long long neg=(numsub*(numsub+1))/2;
            long long ans=pos-neg;
            cout<<ans<<"\n";
         }
         return 0;
        }
