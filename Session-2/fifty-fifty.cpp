#include <iostream>
#include <string.h>
#include <set>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    /*
    int contadorDistintos = 0;
    for(int i = 0; i < 4; i++){
        if(s[0] != s[i]){
            contadorDistintos++;
        }
    }

    if(contadorDistintos == 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    */

    set<char> set;
    set.insert(s[0]); set.insert(s[1]); set.insert(s[2]); set.insert(s[3]);

    if (set.size() == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}