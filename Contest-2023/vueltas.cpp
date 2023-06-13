#include <iostream>

using namespace std;

int main()
{
    int n, p, k;
    cin >> n >> p >> k;

    int finalPos;

    if ((p + k) >= n)
    {
       finalPos = (p + k - 1) % n + 1;
    }
    else
    {
        finalPos = p + k;
    }

    cout << finalPos;

    return 0;
}