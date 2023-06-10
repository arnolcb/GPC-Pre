#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int contador = 0;
    for (char &c : a)
    {
        a = tolower(c);
    }

    for (char &c : b)
    {
        b = tolower(c);
    }

    for (int i = 0; i <a.length(); i++){
        if(a.find(b[i])){
            contador = contador + 1;
        }
    }

    if(contador == b.length()){
        cout << 1;
    } else if(contador > b.length() && contador > b.length()*2){
        cout << 1;
    } else {
        cout << 2;
    }
    return 0;
}