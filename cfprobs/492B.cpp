#include<bits/stdc++.h>

int main()
{
    int n, l;
    std::cin>>n>>l;
    double a[n];
    for (int i=0; i<n; i++) {
        std::cin>>a[i];
    }
    std::sort(a, a+n);
    double diff = std::max(0.0, a[0]);
    for (int i=0; i<n-1; i++) {
        diff = std::max((a[i+1]-a[i])/2.0, diff);
    }
    diff = std::max(diff, l-a[n-1]);
    std::cout<<std::setprecision(10)<<diff<<std::endl;
}