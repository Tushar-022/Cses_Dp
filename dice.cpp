#include<bits/stdc++.h>
using namespace std;


int mod=1e9+7;

int solve(int n,vector<int>&dp){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=0;
    for(int i=1;i<=6;i++){
        ans=(ans%mod+solve(n-i,dp)%mod)%mod;
    }
    return dp[n]=ans;
}


int main(){
    int n;
    cin>>n;
    //vector<int>dp(n+1,-1);
    vector<int>dp(n+1,0);
    dp[0]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6 && i-j>=0;j++)
        {
            (dp[i]+=dp[i-j])%=mod;
        }
    }
    cout<<dp[n]<<endl;
    //cout<<solve(n,dp)<<endl;
    
}

