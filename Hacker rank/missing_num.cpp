#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'missingNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER_ARRAY brr
 */

vector<int> missingNumbers(vector<int> a, vector<int> b) {
    unordered_map<int, int> mp;
    for(int i=0; i<b.size(); i++){
        mp[b[i]]++;
    }
    for(int i=0; i<a.size(); i++){
        mp[a[i]]--;
        if(mp[a[i]]==0) mp.erase(a[i]);
    }
    vector<int> ans;
    for(auto it:mp){
        ans.push_back(it.first);
    }
    sort(ans.begin(), ans.end());
    return ans;
}