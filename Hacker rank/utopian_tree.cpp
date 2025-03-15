#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    int height = 1;
    for(int i=1; i<=n; i++){
        if(i%2 != 0) height = height*2;
        else if(i%2 == 0) height++;      
    }
    return height;
}