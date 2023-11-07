#include<bits/stdc++.h>

void shorten(std::string x){
    int len = x.length();
    std::cout << x[0] << len-2 << x[len-1];
}

int main()
{
    int count;
    std::cin >> count;

    while (count > 0) {
        std::string inp;
        std::cin >> inp;

        if (inp.length() > 10) {
            shorten(inp);
        }
        else {
            std::cout << inp;
        }

        if (count > 1) {
            std::cout << "\n";
        }

        count--;
    }
}