#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'closestNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> closestNumbers(vector<int> a) {
    unordered_map<int, vector<int>> mp;
    sort(a.begin(), a.end());
    for(int i=0; i<a.size()-1; i++){
        int diff = a[i+1]-a[i];
    mp[diff].push_back(a[i+1]);
    mp[diff].push_back(a[i]);
    }
    int mini = 1e9;
    for(auto it:mp){
        mini=min(mini, it.first);
    }
    sort(mp[mini].begin(), mp[mini].end());
    return mp[mini];
}