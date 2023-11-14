#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}


int main()
{
    int t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
        if (n==1) {cout<<"NO"<<endl;} else{
        long long x=sqrt(n);
        if ((x*x==n)&&(isPrime(x))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        }
        t--;
    }
}