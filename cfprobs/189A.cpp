#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int m=min(min(a,b),c);
    int x=max(max(a,b),c);
    int p[n+1];
    for(int i=0; i<x; i++) {p[i]=0; cout<<p[i]<<endl;}
    for (int i=x;i<n+1;i++){
        int ma=max(max(p[i-a], p[(i-b)]),p[i-c])+1;
        p[i]=ma;
        cout<<p[i]<<endl;
    }
    cout<<p[n];
}