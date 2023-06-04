//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void solve(vector <int>sv, vector<int> dv){
    int mayor = 0, menor = 0;
    for(int i = 0; i<sv.size(); i++){
        if(sv[i] < dv[i]){
            cout << "impossible" << endl;
        } else{
            mayor = (sv[i] + dv[i])/2;
            menor = sv[i] - mayor;
            cout << mayor << " " << menor << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    vector<int> sv;
    vector<int> dv;

    //string imposible = "impossible";

    for(int i = 0; i < t; i++){
        int s;
        int d;
        cin >> s >> d;
        sv.push_back(s);
        dv.push_back(d);
    }

    solve(sv, dv);

    return 0;
}