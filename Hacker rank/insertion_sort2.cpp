#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort2' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

void insertionSort2(int n, vector<int> a) {
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(a[j]>a[j+1]){
                int num = a[j+1];
                a[j+1] = a[j];
                a[j]=num;
            }else{
                break;
            }
        }
        for(int k=0; k<n; k++) cout<<a[k]<<" ";
        cout<<endl;
    }
}