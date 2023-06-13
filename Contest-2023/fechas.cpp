#include <iostream>
#include <string>

using namespace std;

int main(){

    string date, newdate;
    getline(cin,date);

    //aaaa-mm-dd
    //0123-56-89

    //dd-mm-aaaa
    //8975640123

    newdate.push_back(date.at(8));
    newdate.push_back(date.at(9));
    newdate.push_back(date.at(7));
    newdate.push_back(date.at(5));
    newdate.push_back(date.at(6));
    newdate.push_back(date.at(4));
    newdate.push_back(date.at(0));
    newdate.push_back(date.at(1));
    newdate.push_back(date.at(2));
    newdate.push_back(date.at(3));
    
    cout << newdate;

    return 0;
}