#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if (a == b)
    {
        return a + b;
    }
    else if (a > b && (a - b) > 1)
    {
        return a + a - 1;
    }
    else if (a > b && (a - b) == 1)
    {
        return a + b;
    }
    else if (b > a && (b - a) > 1)
    {
        return b + b - 1;
    }
    else if (b > a && (b - a) == 1)
    {
        return a + b;
    }
    else
    {
        // cout << "Error" << endl;
        return 0;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << solve(a, b);
    return 0;
}