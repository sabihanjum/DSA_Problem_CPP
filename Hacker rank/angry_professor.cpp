#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a) {
    int cnt = 0;
    string ans = "";
    for(int i=0; i<a.size(); i++){
        if(a[i]<=0) cnt++;
    }
    if(cnt>=k) ans="NO";
    else ans = "YES";
    return ans;
}