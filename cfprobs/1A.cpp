#include<bits/stdc++.h>

int main()
{
    long long n, m, a;
    std::cin >> n >> m >> a;

    std::cout << (n/a+(1*(n%a>0)))*(m/a+(1*(m%a>0)));
}