#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maximumToys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER k
 */

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int cnt=0; 
    for(int i=0; i<prices.size(); i++){
        if(k>=prices[i]){
            cnt++;
            k-=prices[i];
        }
        else break;
    }
    return cnt;
}