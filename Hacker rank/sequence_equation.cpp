#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */

vector<int> permutationEquation(vector<int> a) {
    vector<int> ans;
    unordered_map<int, int> mp;
    for(int i=0; i<a.size(); i++) mp[a[i]] = i+1;
    int n = a.size();
    for(int i=1; i<=n; i++){
        int x=i;
        int idx1=mp[x];
        int idx2=mp[idx1];
        ans.push_back(idx2);
    }
    return ans;
}