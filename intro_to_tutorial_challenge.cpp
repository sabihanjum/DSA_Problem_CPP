#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'introTutorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER V
 *  2. INTEGER_ARRAY arr
 */

int introTutorial(int V, vector<int> arr) {
    int idx=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==V){
            idx=i;
            break;
        }
    }
    return idx;
}