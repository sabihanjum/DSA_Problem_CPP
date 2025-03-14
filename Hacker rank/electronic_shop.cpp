#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int m = keyboards.size();
    int n = drives.size();
    int maxi=-1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int sum = keyboards[i]+drives[j];
            if(sum<=b){
                maxi = max(maxi, sum);
            }
        }
    }
    return maxi;
}