#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            long long ans=1;
            set<int> st;
            st.insert(s[0]-'a');
            // if(n>=2) st.insert(s[0]-'a');
            int i=1;
            for(int len=n-1;len>0;len--){
                st.insert(s[i]-'a');
                int cnt=(int)st.size();
                ans+=cnt;
                i++;
            }
            cout<<ans<<"\n";

        }
}