#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
        sort(a, a+n);
        int p=0;
        int x=1;
        int c=0;
        while (x+p<=n){
            if (a[p+x-1]==x){
                c++;
                p+=x;
                x=0;
            }
            else {
                x++;
            }
        }
        cout<<c<<endl;
        t--;
    }
}