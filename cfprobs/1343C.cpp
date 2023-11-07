#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        long long a[k];
        for (int j=0;j<k;j++){cin>>a[j];}

        int x=0;
        long long sum=0;
        long long currmax = a[0];

        for (int j=0; j<k; j++) {
            if ((a[x]>0)==(a[j]>0)){
                currmax = max(currmax, a[j]);
            }
            else {
                x=j;
                sum += currmax;
                currmax = a[j];
            }
        }
        sum+=currmax;
        cout<<sum<<endl;

    }
}