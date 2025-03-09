#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int size = a.size();
    int i = 0;
    int cnt1 = 0, cnt2 = 0;
    while(i < size){
        if(a[i] > b[i])  cnt1++;
        else if(a[i] < b[i]) cnt2++;
        i++;
    }
    vector<int> ans;
    ans.push_back(cnt1);
    ans.push_back(cnt2);
    return ans;

}

