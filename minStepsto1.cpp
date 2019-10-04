#include<iostream>
using namespace std;
int minStepsto1(int n,int *dp)
{
    int ans1,ans2=INT_MAX,ans3=INT_MAX; //INT_MAX is infinity
    if(dp[n-1]==-1)
    {
    ans1=minStepsto1(n-1,dp);
    dp[n-1]=ans1;
    }
    else{
        ans1=dp[n-1];
    }
    if((n%2)==0)
    {
        if(dp[n/2]==-1)
        {
        ans2=minStepsto1(n/2,dp);
        dp[n/2]=ans2;
        }
        else{
            ans2=dp[n/2];
        }
    }
    if(n%3==0)
    {
        ans3=minStepsto1(n/3);
    }
    int myans=min(ans1,min(ans2,ans3))+1;
    return myans
}
