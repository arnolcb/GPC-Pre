#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

void communicate(int a, int b, int c, int d, int e, int k){
    if(e - a > k){
        cout << ":(" << endl;
    }else{
        cout << "Yay!" << endl;
    }
}

int main(){
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    communicate(a, b, c, d, e, k);
    
    return 0;
}