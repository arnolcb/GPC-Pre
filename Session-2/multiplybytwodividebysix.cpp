#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <math.h>

#define ll long long
#define ld long double

using namespace std;

void solve(){
    ll n;
    cin>> n;
    ll num = n, cnt = 0;
    while(num!=1){
        if(num%6==0){
            num/=6;
            cnt++;
        }
        else if(num%3==0){
            num*=2;
            cnt++;
        }
        else{
            cnt = -1;
            break;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    cin>>t;

    cout << " " << endl;
    
    while(t--)
    {
        solve();
    }

    return 0;
}