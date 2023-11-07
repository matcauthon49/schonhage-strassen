#include<bits/stdc++.h>

int main()
{
    int count;
    std::cin >> count;

    int no = 0;

    while (count > 0) {
        int x, y, z;
        std::cin >> x >> y >> z;

        if (x+y+z>=2) {
            no++;
        }

        count--;
    }

    std::cout << no;
}