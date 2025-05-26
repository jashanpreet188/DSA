#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           vector<int> arr(n,0);
           for(int i=0;i<n;i++){
            cin>>arr[i];
           }
           vector<long long> dp(n,0);
           long long maxi=arr[0];
           dp[0]=arr[0];
           for(int i=1;i<n;i++){
                dp[i]=arr[i];
                if((arr[i]%2 && (arr[i-1]%2)==0) || (arr[i-1]%2 && (arr[i]%2)==0)){
                    dp[i]=max(dp[i-1]+arr[i],dp[i]);
                }
                maxi=max(maxi,dp[i]);
           }
           cout<<maxi<<"\n";

        }
}
