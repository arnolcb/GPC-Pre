#include <iostream>

using namespace std;

int main(){
    int a, b, A, B;
    cin >> a >> b >> A >> B;

    int contOperaciones; //= 0;

    int dif1 = B-b;
    int dif2 = A-a;
    int dif3 = B/b;
    int dif4 = A/a;

    if(a==A && b == B){
        contOperaciones = 0;
    }
    else if(a==A && (b+dif1)==B){
        contOperaciones = 1;
    }
    else if(a==A && (b*dif3)==B){
        contOperaciones = 1;
    }
    else if((a+dif2)==A && b==B){
        contOperaciones = 1;
    }
    else if((a*dif4)==A && b == B){
        contOperaciones = 1;
    }
    else if((a*dif4)==A && (b*dif4)==B){
        contOperaciones = 1;
    }
    else if((a*dif3)==A && (b*dif3)==B){
        contOperaciones = 1;
    }
    else if((a+dif1)==A &&(b+dif1)==B){
        contOperaciones = 1;
    }
    else if((a+dif2)==A &&(b+dif2)==B){
        contOperaciones = 1;
    }
    else if((a+dif2)==A && (b+dif1)==B){
        contOperaciones = 2;
    }
    else if((a+dif2)==A && (b*dif3)==B){
        contOperaciones = 2;
    }
    else if((a*dif4)==A && (b+dif1)==B){
        contOperaciones = 2;
    }

    cout << contOperaciones;

    return 0;
}