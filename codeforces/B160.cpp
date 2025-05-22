#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
         string s;
         cin>>s;
         int cnt1=0;
         int cnt0=0;
         for(int i=0;i<s.length();i++){
            if(s[i]=='0') cnt0++;
            if(s[i]=='1') cnt1++;
         }
         int n=s.length();
         if(cnt0==0 || cnt1==0){
            cout<<n<<"\n";
            continue;
         }
         int ans=0;

         for(int i=0;i<s.length();i++){
            if(s[i]=='1') cnt0--;
            if(s[i]=='0') cnt1--;
            if(cnt1==-1 || cnt0==-1){
                ans=n-i;
                break;
            }
         }
         cout<<ans<<"\n";

        }
}