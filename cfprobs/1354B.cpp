#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        int a=-1;
        int b=-1;
        int c=-1;
        int mi=200001;
        for (int j=0;j<s.length();j++) {
            int m=0;
            if (s[j]=='1') {
                a=0;
                if (b>=0){b++;}
                if (c>=0){c++;}
                if ((c>=0)&&(b>=0)&&(a>=0)){m = max(max(a, b),c);}
            }
            else if (s[j]=='2') {
                b=0;
                if (a>=0){a++;}
                if (c>=0){c++;}
                if ((c>=0)&&(b>=0)&&(a>=0)){m = max(max(a, b),c);}
            }
            else if (s[j]=='3') {
                c=0;
                if (b>=0){b++;}
                if (a>=0){a++;}
                if ((c>=0)&&(b>=0)&&(a>=0)){m = max(max(a, b),c);}
            }
            if ((c>=0)&&(b>=0)&&(a>=0)){mi = min(m, mi);}
            // cout<<a<<' '<<b<<' '<<c<<' '<<m<<' '<<mi<<"\n";
        }
        if ((a>-1)&&(b>-1)&&(c>-1)){
            cout<<mi+1<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
}