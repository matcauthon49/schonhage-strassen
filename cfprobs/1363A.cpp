#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
        int n, x;
        cin>>n>>x;
        int w;
        int e=0;
        int o=0;
        for (int i=0;i<n;i++){cin>>w; (w%2==0)?e++:o++;}
        if (o%2==0) {o-=1;}
        x-=o;
        if (x>=0){
            if (x-e>0){
                cout<<"No"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }
        }
        else {
            if (x%2==0){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
        t--;
    }
}