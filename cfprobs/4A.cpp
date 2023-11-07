#include<bits/stdc++.h>

int test_even(int x){
    return x%2;
}

int main()
{
    int inp;
    std::cin >> inp;

    if ((test_even(inp)) or (inp <= 2)) {
        std::cout << "NO";
    }
    else {
        std::cout << "YES";
    }
}