#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int findMedian(vector<int> a) {
    sort(a.begin(), a.end());
    int n = a.size();
    int i=0, j=n-1;
    int mid = i+(j-i)/2;
    return a[mid];
}