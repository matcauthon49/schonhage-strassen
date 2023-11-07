#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b;
    cin>>b;
    int boys[b];
    for (int i=0; i<b;i++) {cin>>boys[i];}
    int g;
    cin>>g;
    int girls[g];
    for (int i=0; i<g; i++) {cin>>girls[i];}

    sort(boys, boys+b);
    sort(girls, girls+g);

    int i =0;
    int j = 0;
    int counter=0;

    while ((i<b)&&(j<g)) {
        if (girls[j]<boys[i]-1){
            j++;
        }
        else if ((girls[j]==boys[i]-1)||(girls[j]==boys[i])||(girls[j]==boys[i]+1)){
            counter++;
            i++;
            j++;
        }
        else if (girls[j]>boys[i]+1) {
            i++;
        }
    }
    cout<<counter;
    
}