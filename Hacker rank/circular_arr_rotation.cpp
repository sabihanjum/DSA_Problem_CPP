#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    if(k>= a.size()){
        while(k>= a.size()){
            k=k-a.size();
        }
    }
    vector<int> ans;
    vector<int> ip;
    for(int i=a.size()-k; i<a.size(); i++) ip.push_back(a[i]);
    for(int i=0; i<a.size()-k; i++) ip.push_back(a[i]);
    for(int i=0; i<queries.size(); i++){
        int idx = queries[i];
        ans.push_back(ip[idx]);
    }
    return ans;
}