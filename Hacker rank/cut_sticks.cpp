#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> cutTheSticks(vector<int> a) {
    vector<int> ans;
    int mini = *min_element(a.begin(), a.end());
    while(1){
        int cnt=0; 
        int cut = mini;
        mini = 1e9;
        for(int j=0; j<a.size(); j++){
            if(a[j] != 1e9){
                cnt++;
                a[j] -= cut;
                if(a[j]==0) a[j] = 1e9;
            }
            mini = min(mini, a[j]);
        }
        if(cnt!=0){
            ans.push_back(cnt);
        }
        else break;
    }
    return ans;
}