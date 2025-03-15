#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */

int beautifulDays(int i, int j, int k) {
    int cnt =0;
    for(int st=i; st<=j; st++){
        int num = st;
        int rev = 0;
        int temp = num;
        while (temp>0) {
            int ld = temp%10;
            rev = rev * 10 + ld;
            temp = temp/10;
        }
        int diff = abs(rev-num);
        if(diff%k == 0) cnt++;
    }
    return cnt;
}