#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long mini = 0;
    for(int i = 0; i<4; i++) mini += arr[i];
    long long maxi = 0;
    for(int  i = 1; i < 5; i++) maxi += arr[i];
    cout<<mini<<" "<<maxi;

}