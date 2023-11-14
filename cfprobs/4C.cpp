#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string, int> u;
    while(t){
        string s;
        cin>>s;
        if (u.find(s) == u.end()) {
            u[s]=0;
            cout<<"OK"<<endl;
        } else {
            u[s]++;
            cout<<s<<u[s]<<endl;
        }
        t--;
    }
}