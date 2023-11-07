#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        int n;
        cin>>n;
        long long a[n];
        for (int j=0;j<n;j++){cin>>a[j];}
        sort(a, a+n);
        int p=1;
        long long sum=0;
        for (int j=n-1;j>-1;j--){
            if ((p)&&(a[j]%2==0)) {sum+=a[j];}
            else if ((p==0)&&(a[j]%2==1)) {sum-=a[j];}
            p^=1;
            // cout<<"sum:"<<sum<<"\n";
        }
        if (sum>0) {cout<<"Alice"<<endl;}
        else if (sum<0) {cout<<"Bob"<<endl;}
        else {cout<<"Tie"<<endl;}
    }
}