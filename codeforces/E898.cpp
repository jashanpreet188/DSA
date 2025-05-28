#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    bool pred(long long mid,long long x,vector<long long>& arr ){
        long long water=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            water+=max(0ll,mid-arr[i]);
            if(water>x) return 1;
        }
        if(water<=x) return 0;
        return 1;
    }
     int main(){
        int t;
        cin>>t;
        while(t--){
            long long n,x;
            cin>>n>>x;
            vector<long long> arr(n,0);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            long long l=0;
            long long r=1e18;
            while(l+1<r){
                long long mid=l+(r-l)/2;
                if(pred(mid,x,arr)==0) l=mid;
                else r=mid;
            }
          cout<<l<<"\n";
        }
}
