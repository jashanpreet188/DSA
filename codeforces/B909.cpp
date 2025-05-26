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
           int maxi=0;
           int mini=INT_MAX;
           for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
           }
           long long ans=maxi-mini;
           for(int k=2;k*k<=n;k++){
                if((n%k)==0){
                    long long bdha=0;
                    long long chota=LLONG_MAX;
                    long long sum=0;
                    int cnt=0;
                    for(int i=0;i<n;i++){
                        sum+=arr[i];
                        cnt++;
                        if(cnt==k){
                            cnt=0;
                            bdha=max(bdha,sum);
                            chota=min(chota,sum);
                            sum=0;

                        }
                    }
                    ans=max(ans,bdha-chota);
                    bdha=0;
                    chota=LLONG_MAX;
                    cnt=0;
                    sum=0;
                    for(int i=0;i<n;i++){
                        sum+=arr[i];
                        cnt++;
                        if(cnt==(n/k)){
                            cnt=0;
                            bdha=max(bdha,sum);
                            chota=min(chota,sum);
                            sum=0;

                        }
                    }
                    ans=max(ans,bdha-chota);
                }
           }
           cout<<ans<<"\n";

        }
}
