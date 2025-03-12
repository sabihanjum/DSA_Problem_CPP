#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    string ans = "";
    if(v1<v2 || v1==v2) ans = "NO";
    else
        if(v1>v2){
            int x_ = x2-x1;
            int v_ = v2-v1;
            if(x_ % v_ == 0) ans = "YES";
            else ans = "NO";
        }
        return ans;
}