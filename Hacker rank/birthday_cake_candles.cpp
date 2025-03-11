#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> a) {
    int maxi = *max_element(a.begin(), a.end());
    
    int cnt =0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==maxi) cnt++;
    }
    return cnt;

}