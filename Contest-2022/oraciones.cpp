#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    vector<string> lineas;
    string linea;
    int contBien = 0;
    int contMal = 0;
    for (int i = 0; i < t; i++)
    {
        getline(cin, linea);
        //lineas.push_back(linea);
        if(linea.find("bien")){
            contBien += 1;
        }
        if(linea.find("mal")){
            contMal +=1;
        }
        if(contBien > contMal){
            cout << "positiva" << endl;
        } else if(contBien == contMal){
            cout << "neutra" << endl;
        } else if(contMal > contBien){
            cout <<"negativa" << endl;
        }
        //Reiniciamos contadores
        contBien = 0;
        contMal = 0;
    }
    return 0;
}