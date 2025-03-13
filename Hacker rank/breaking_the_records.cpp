#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    int n = scores.size();
    vector<int> ans(2,0);
    vector<int> prefix_max(n,0);
    vector<int> prefix_min(n, 0);
    prefix_max[0] = scores[0];
    prefix_min[0] = scores[0];
    for(int i=1; i<n; i++){
        prefix_max[i] = max(prefix_max[i-1], scores[i]);
        if(scores[i]>prefix_max[i-1]) ans[0]+=1;
        prefix_min[i] = min(prefix_min[i-1], scores[i]);
        if(scores[i]<prefix_min[i-1]) ans[1]+=1;
    }
    return ans;
}