// Dubsteb

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    string v = "WUB";
    string s;
    cin >> s;

    int pos = s.find(v);

    while (pos != -1)
    {
        pos = s.find(v);
        if (pos == 0)
        {  
            s.erase(pos, 3);
            pos = s.find(v);
            if(pos==1){
                s.erase(pos, 3);
            }
        }
        else if (pos != -1)
        {
            s.erase(pos, 3);
            s.insert(pos, " ");
        }
    }

    cout << s << endl;

    return 0;
}