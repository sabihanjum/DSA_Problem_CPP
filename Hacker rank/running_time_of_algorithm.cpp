#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'runningTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int runningTime(vector<int> a) {
    int cnt = 0;
    for(int i=1; i<a.size(); i++){
        for(int j=i-1; j>=0; j--){
            if(a[j]>a[j+1]){
                int num = a[j+1];
                a[j+1] = a[j];
                a[j] = num;
                cnt++;
            }else{
                break;
            }
        }
    }
    return cnt;
}