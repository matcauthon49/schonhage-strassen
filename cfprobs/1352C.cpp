#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        long long n,k;
        cin>>n>>k;
        long long x=(k%(n-1)!=0)?((k/(n-1))*n)+(k%(n-1)):((k/(n-1))*n)-1;
        cout<<x<<endl;
        t--;
    }
}