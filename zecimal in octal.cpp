#include <iostream>
using namespace std;

long zecimalinOctal(long n);
int main() {
    long zecimal;
    cout << "Introdu un numar zecimal\n";
    cin >> zecimal;
    cout << "Transformat in numar octal este : " << zecimalinOctal(zecimal);

    return 0;
}

long zecimalinOctal(long n) {
    int remainder;
    long octal = 0, i = 1;

    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
}
