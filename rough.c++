#include <bits/stdc++.h>


int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }
    int prevpower = power(n, p - 1);
    return n * prevpower;
}
int main()
{
    int n, p;
    std::cout << "Enter n and p: ";
    std::cin >> n >> p;
    std::cout << power(n, p);
    return 0;
}