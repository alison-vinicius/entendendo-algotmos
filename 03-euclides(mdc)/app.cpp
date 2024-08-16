#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int mdc(int a, int b){
    int resto, aux;
    while(resto != 0){
        resto = a%b;
        a = b;
        aux = b;
        b = resto;

    }

    return aux;
}

int main(){
    int n,a, b;

    cin >> n;
    for(int i= 0; i < n; i++){
        cin >> a >> b;
        cout << mdc(a,b) << endl;
    }
}