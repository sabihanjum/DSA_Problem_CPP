#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    bool flag = 0;
    for(int i = p; i <= q; i++) {
        string s = to_string(i);
        int digits = s.size();
        long long squared = (long long)i * (long long)i;
        string s1 = to_string(squared);
        string leftpart = "", rightpart = "";

        if(s1.size() <= digits) {
            rightpart = s1;
        } else {
            leftpart = s1.substr(0, s1.size() - digits);
            rightpart = s1.substr(s1.size() - digits);
        }

        long long left = 0;
        if(leftpart != "") {
            left = stoll(leftpart);
        }
        long long right = (rightpart != "") ? stoll(rightpart) : 0;

        if(left + right == i) {
            cout << i << " ";
            flag = 1;
        }
    }

    if(flag == 0) cout << "INVALID RANGE";
}
