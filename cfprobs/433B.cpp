#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long v[n];
    long long s[n];
    for (int i=0;i<n;i++) {cin>>v[i];}
    for (int i=0;i<n;i++) {s[i]=v[i];}
    sort(s, s+n);
    long long av[n+1];
    long long as[n+1];
    av[0] = 0;
    as[0] = 0;
    for (int i=1;i<n+1;i++) {
        av[i] = av[i-1] + v[i-1];
        as[i] = as[i-1] + s[i-1];
    }

    int q;
    cin>>q;
    for (int i=0;i<q;i++){
        int t, l, r;
        cin>>t>>l>>r;
        long long x = (t==1)?(av[r]-av[l-1]):(as[r]-as[l-1]);
        cout<<x<<endl;
    }
}