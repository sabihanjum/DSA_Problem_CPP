#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> a) {
    unordered_map<int, int> mp;
    for(int i=0; i<a.size(); i++){
        mp[a[i]]++;
    }
    int maxi=0;
    for(auto it:mp){
        maxi = max(maxi, it.second);
    }
    int ans=1e9;
    for(auto it: mp){
        if(it.second==maxi){
            ans=min(ans, it.first);
        }
    }
    return ans;
}