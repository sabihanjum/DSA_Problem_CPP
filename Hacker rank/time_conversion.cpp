#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string format = "";
    format += s[8];
    format += s[9];

    string hr = "";
    hr += s[0];
    hr += s[1];

    if(format == "PM" && hr != "12"){
        int x = stoi(hr);
        x += 12;
        string newhr = to_string(x);
        s[0] = newhr[0];
        s[1] = newhr[1];
    }
    else if (format == "AM" && hr == "12"){
        s[0] = '0'; 
        s[1] = '0';
    } 

    s.pop_back(); // remove 'M'
    s.pop_back(); // remove 'A' or 'P'
    return s;
}
