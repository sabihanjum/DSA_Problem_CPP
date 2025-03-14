#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    string ans="";
    int diff1 = abs(x-z);
    int diff2 = abs(y-z);
    if(diff1==diff2) ans = "Mouse C";
    else
        if(diff1<diff2){
            ans = "Cat A";
        }else ans = "Cat B";
        return ans;
}
