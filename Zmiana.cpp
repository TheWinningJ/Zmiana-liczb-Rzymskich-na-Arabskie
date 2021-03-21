// Zmiana.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string convert(int digit, string low, string mid, string high);
string convert_string(string input) {

    for (int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
    }

    return input;
}
int procedureRomantoArabic(string RomanChars) {
    RomanChars = convert_string(RomanChars);
    int total = 0;
    int max_value = 0;
    int M, D, C, L, X, V, I;
    M = 1000;
    D = 500;
    C = 100;
    L = 50;
    X = 10;
    V = 5;
    I = 1;
    double StringLength = RomanChars.length();
    for (int i = 0; i < StringLength; i++) {
        if (RomanChars[i] == 'M') {
            if (M >= max_value) {
                total += M;
                max_value = M;
            }
            else {
                total -= M;
            }
        }
        if (RomanChars[i] == 'D') {
            if (D >= max_value) {
                total += D;
                max_value = D;
            }
            else {
                total -= D;
            }
        }
        if (RomanChars[i] == 'C') {
            if (C >= max_value) {
                total += C;
                max_value = C;
            }
            else {
                total -= C;
            }
        }
        if (RomanChars[i] == 'L') {
            if (L >= max_value) {
                total += L;
                max_value = L;
            }
            else {
                total -= L;
            }
        }
        if (RomanChars[i] == 'X') {
            if (X >= max_value) {
                total += X;
                max_value = X;
            }
            else {
                total -= X;
            }
        }
        if (RomanChars[i] == 'V') {
            if (V >= max_value) {
                total += V;
                max_value = V;
            }
            else {
                total -= V;
            }
        }
        if (RomanChars[i] == 'I') {
            if (I >= max_value) {
                total += I;
                max_value = I;
            }
            else {
                total -= I;
            }
        }
    }
    return total;
} 
int main() {
    string character;
    int conversion = 0;
    while (cin >> character) {
        conversion = procedureRomantoArabic(character);
        cout << conversion << endl;
    }
    return 0;
    setlocale(LC_ALL, "pl_PL");
    char type;
}