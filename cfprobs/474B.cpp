#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l<=r) {
        int m = l+(r-l)/2;
         if ((arr[m]<=x)&&(arr[m+1]>=x))
            return m;
         if ((arr[m]<x)&&(arr[m+1]<x))
            l=m+1;
         else
            r=m-1;
    }
     return -1;
}

int main()
{
    int t;
    cin>>t;
    int a[t+1];
    a[0]=0;
    for(int i=1;i<t+1;i++) {cin>>a[i];}
    for(int i=1;i<t+1;i++) {a[i]+=a[i-1];}
    int m;
    cin>>m;
    int x;
    for(int i=0;i<m;i++){
        cin>>x;
        int result = binarySearch(a, 0, t, x);
        cout<<result+1<<endl;
    }
}