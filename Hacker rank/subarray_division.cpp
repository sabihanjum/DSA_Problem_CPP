#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    vector<vector<int>> ds;
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            vector<int> temp;
            for(int k=i; k<=j; k++){
                temp.push_back(s[k]);
            }
            ds.push_back(temp);
        }
    }
    int cnt=0;
    for(int i=0; i<ds.size(); i++){
        if(ds[i].size()==m){
            int sum=0;
            for(int j=0; j<ds[i].size(); j++){
                sum += ds[i][j];
            }
            if(sum==d) cnt++;
        }
    }
    return cnt;

}