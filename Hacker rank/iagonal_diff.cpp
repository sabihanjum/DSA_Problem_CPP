#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int row = arr.size();
    int col = arr.size();
    int lr = 0, rl = 0;
    for(int i=0; i<row; i++){
        lr+=arr[i][i];
        rl+=arr[i][row-i-1];
    }
    int ans = abs(lr - rl);
    return ans;
}
