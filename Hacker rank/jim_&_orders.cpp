#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'jimOrders' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts 2D_INTEGER_ARRAY orders as parameter.
 */

vector<int> jimOrders(vector<vector<int>> orders) {
    vector<pair<int, int>> ans;
    for(int i=0; i<orders.size(); i++){
        ans.push_back({i+1, orders[i][0]+orders[i][1]});
    }
    auto comp=[](pair<int, int> &x, pair<int, int> &y){
        if(x.second == y.second) return x.first<y.first;
        return x.second<y.second;
    };
    sort(ans.begin(), ans.end(), comp);
    vector<int> op;
    for(int i=0; i<ans.size(); i++){
        op.push_back(ans[i].first);
    }
    return op;
}