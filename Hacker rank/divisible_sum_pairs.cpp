#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> a) {
    int cnt = 0;
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if((a[i]+a[j])%k==0) cnt++;
        }
    }
    return cnt;

}