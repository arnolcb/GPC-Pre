#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int totalSuma = (n * (n + 1)) / 2;

    int nuevaSuma = totalSuma - s;

    if(nuevaSuma < 1 || nuevaSuma > n){
        cout << -1;
    } else {
        cout << nuevaSuma;
    }
    return 0;
}