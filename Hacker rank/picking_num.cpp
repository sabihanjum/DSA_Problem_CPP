#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    int maxi=0;
    for(int i=0; i<a.size(); i++){
        int first = a[i];
        for(int j=i+1; j<a.size(); j++){
            int second = a[j];
            if(second-first <= 1) maxi = max(maxi, j-i+1);
            else
                break;
        }
    }
    return maxi;
}
