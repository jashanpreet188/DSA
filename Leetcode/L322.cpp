class Solution {
public:
//  long long dp[13][10001];
    // long long solve(int i,int rem,vector<int>& coins){
    //     int n=coins.size();
    //     if(rem==0) return 0;
    //     if(i==n || rem<0) return 1e5;
    //     if(dp[i][rem]!=-1) return dp[i][rem];
    //     int inc=1+solve(i,rem-coins[i],coins);
    //     int exc=solve(i+1,rem,coins);
    //     return dp[i][rem]= min(inc,exc);
    // }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        // memset(dp,-1,sizeof(dp));
        sort(coins.rbegin(),coins.rend());
        
        vector<long long> prev(amount+1,0);
        vector<long long> cur(amount+1,0);
        for(int rem=1;rem<=amount;rem++){
            prev[rem]=1e5;
        }
        prev[0]=0;

        for(int i=0;i<n;i++){
            cur[0]=0;
            for(int rem=1;rem<=amount;rem++){
                // dp[i][rem]=dp[i-1][rem];
                cur[rem]=prev[rem];

                if((rem-coins[i])>=0) cur[rem]=min(cur[rem],1+cur[rem-coins[i]]);
            }
            prev=cur;
        }
        return prev[amount]==1e5 ? -1 :prev[amount];
        // long long ans=solve(0,amount,coins);
        // return ans==1e5 ? -1:ans;
    }
};