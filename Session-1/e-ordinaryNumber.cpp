#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    int count = 0;
    vector<int> array(n);
    vector<int> answers;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        // Condicionales para evitar que se salga del vector
        if (i > 0 && i < n - 1)
        {
            if (array[i] > array[i - 1] && array[i] < array[i + 1])
            {
                count++;
            }
            else if (array[i] < array[i - 1] && array[i] > array[i + 1])
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}