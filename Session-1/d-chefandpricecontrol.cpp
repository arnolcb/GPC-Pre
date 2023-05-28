#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    vector<int> answers;
    while (t != 0)
    {
        cin >> n >> k;
        vector<int> array(n);
        vector<int> array2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int sum = 0, sum2 = 0;
        for (int i = 0; i < array.size(); i++)
        {
            sum += array[i];
            if (array[i] > k)
            {
                array[i] = k;
                sum2 += array[i];
            }
            else
            {
                sum2 += array[i];
            }
        }
        // cout << sum - sum2;
        answers.push_back(sum - sum2);
        t = t - 1;
    }

    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << endl;
    }

    return 0;
}