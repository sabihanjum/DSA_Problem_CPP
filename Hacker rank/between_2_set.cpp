#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int st = *max_element(a.begin(), a.end());
    int ed = *min_element(b.begin(), b.end());
    int cnt=0;
    for(int i=st; i<=ed; i++){
        bool flag1=0;
        for(int j=0; j<a.size(); j++){
            if(i%a[j]==0) continue;
            else{
                flag1=1;
                break;
            }
        }
        if(flag1==0){
            bool flag2=0;
            for(int k=0; k<b.size(); k++){
                if(b[k]%i==0) continue;
                else{
                    flag2=1;
                    break;
                }
            }
            if(flag2==0) cnt++;
        }
    }
    return cnt;
}