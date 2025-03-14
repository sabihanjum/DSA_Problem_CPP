#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int sea_level = 0; int cnt=0;
    for(int i=0; i<steps; i++){
        if(path[i]=='U') sea_level++;
        else sea_level--;
        if(sea_level==0 && path[i]=='U') cnt++;
    }
    return cnt;
}