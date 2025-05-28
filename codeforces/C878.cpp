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
          sort(arr.begin(),arr.end());
          long long sum=1;
          if(arr[0]!=1){
            cout<<"NO\n";
            continue;
          }
          
          bool ans=true;
          for(int i=1;i<n;i++){
            if(arr[i]>sum){
                ans=false;
                break;
            }
            sum+=arr[i];
          }
          if(ans) cout<<"YES\n";
          else cout<<"NO\n";

        }
}
