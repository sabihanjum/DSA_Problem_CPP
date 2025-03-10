#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for(int i=0; i<n; i++){
        int space = n-i-1;
        for(int j=0; j<space; j++) cout<<" ";
        for(int j=0; j<=i; j++) cout<<"#";
        cout<<endl;
    }

}