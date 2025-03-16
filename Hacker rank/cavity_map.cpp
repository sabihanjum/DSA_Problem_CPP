#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'cavityMap' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY grid as parameter.
 */

vector<string> cavityMap(vector<string> grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<string> ans=grid;
    for(int i=1; i<m-1; i++){
        for(int j=1; j<n-1; j++){
            if(grid[i-1][j]<grid[i][j] && grid[i+1][j]<grid[i][j] && grid[i][j-1]<grid[i][j] && grid[i][j+1]<grid[i][j]){
                ans[i][j] = 'X';
            }
        }
    }
    return ans;
}