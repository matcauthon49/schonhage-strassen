#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int ts=t-3;
    int x,y,z;
    cin>>x>>y>>z;
    if (((x%2)==(y%2))&&((x%2)==(z%2))){
        while(ts){
            int a;
            cin>>a;
            if (a%2!=x%2){cout<<t-ts+1; return 0;}
            ts--;
        }
    }
    else if (((x%2)==(y%2))&&((x%2)!=(z%2))) {cout<<3;}
    else if (((x%2)!=(y%2))&&((x%2)==(z%2))) {cout<<2;}
    else if (((y%2)==(z%2))&&((x%2)!=(z%2))) {cout<<1;}
}