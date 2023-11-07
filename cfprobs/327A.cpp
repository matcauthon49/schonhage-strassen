#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int dp[n];
    int ones[n];
    for (int i=0;i<n;i++) {cin>>a[i];}
    ones[0]=a[0];
    for (int i=1;i<n;i++) {ones[i]=ones[i-1]+a[i];}

    int flip[n][n];
    for (int i=0;i<n;i++){flip[i][i]=1-a[i];}

    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            flip[i][j]=flip[i][j-1]+1-a[j];
        }
    }

    dp[0]=1-a[0];
    for (int i=1;i<n;i++){
        int m=flip[0][i];
        for(int j=1;j<=i;j++) {
            m=max(m, flip[j][i]+ones[j-1]);
        }
        dp[i]=max(m, dp[i-1]+a[i]);
    }

    cout<<dp[n-1];
}