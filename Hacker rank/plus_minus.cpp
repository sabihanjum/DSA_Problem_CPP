#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int cnt1 = 0; int cnt2 = 0; int cnt3 = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < 0) cnt2++;
        else if(arr[i] > 0) cnt1++;
        else cnt3++;
    }
    double x1, x2, x3;
    x1 = (double) cnt1 /(double) arr.size();
    x2 = (double) cnt2 / (double) arr.size();
    x3 = (double) cnt3 / (double) arr.size();
    
    cout<<setprecision(6)<<x1<<endl;
    cout<<setprecision(6)<<x2<<endl;
    cout<<setprecision(6)<<x3<<endl;
 
}