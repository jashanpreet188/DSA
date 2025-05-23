#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            vector<int> arr(n,0);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            if(k!=4){
                int mini=5;
                for(int i=0;i<n;i++){
                    if((arr[i]%k)==0) mini=0;
                    mini=min(mini,(k-(arr[i]%k)));
                }
                cout<<mini<<"\n";
                continue;
            }
            int mini=4;
            int cnt=0;
            for(int i=0;i<n;i++){
                if((arr[i]%4)==0) mini=0;
                mini=min(mini,(4-(arr[i]%4)));
                if((arr[i]%2)==0) cnt++;
            }
            if(cnt>=2) mini=0;
            if(cnt==1) mini=min(mini,1);
            if(cnt==0) mini=min(mini,2);
            cout<<mini<<"\n";

        }
}