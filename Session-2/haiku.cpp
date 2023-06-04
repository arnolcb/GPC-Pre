//Haiku

#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<char> vocales;
    vocales.push_back('a');
    vocales.push_back('e');
    vocales.push_back('i');
    vocales.push_back('o');
    vocales.push_back('u');

    string s1;
    string s2;
    string s3;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    int contadorS1 = 0;
    int contadorS2 = 0;
    int contadorS3 = 0;

    for(int i = 0; i < s1.length(); i++){
        for(int j = 0; j < vocales.size(); j++){
            if(s1[i] == vocales[j]){
                contadorS1++;
            }
        }
    }

    for(int i = 0; i < s2.length(); i++){
        for(int j = 0; j < vocales.size(); j++){
            if(s2[i] == vocales[j]){
                contadorS2++;
            }
        }
    }

    for(int i = 0; i < s3.length(); i++){
        for(int j = 0; j < vocales.size(); j++){
            if(s3[i] == vocales[j]){
                contadorS3++;
            }
        }
    }

    if(contadorS1 == 5 && contadorS2 == 7 && contadorS3 == 5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}