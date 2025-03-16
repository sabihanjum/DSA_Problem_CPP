#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'balancedSums' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

string balancedSums(vector<int> a) {
    int n = a.size();
    vector<int> prefix(n, 0);
    prefix[0] = a[0];
    for(int i=0; i<n; i++) prefix[i] = a[i] + prefix[i-1];
    bool flag = 0;
    for(int i=0; i<n; i++){
        int left = 0, right=0;
        if(i==0){
            left=0;
            right = prefix[n-1] - prefix[i];
        }else if(i==n-1){
            left = prefix[i-1];
            right = 0;
        }else{
            left = prefix[i-1];
            right = prefix[n-1] - prefix[i];
        }
        if(left == right){
            flag = 1;
            break;
        }
    }
    if(flag == 1) return "YES";
    return "NO";
}