#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    int temp = n;
    int cnt = 0;
    while(n>0){
        int ld = n%10;
        if(ld!=0 && temp%ld==0) cnt++;
        n=n/10;
    }
    return cnt;
}