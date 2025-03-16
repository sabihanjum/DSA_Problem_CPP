#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort1' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

void insertionSort1(int n, vector<int> arr) {
    int num = arr[n-1];
    bool flag = 0;
    for(int i=n-2; i>=0; i--){
        if(arr[i]>num){
            arr[i+1]=arr[i];
        }
        else if(arr[i]<num){
            arr[i+1] = num;
            flag=1;
        }
        for(int j=0; j<n; j++) cout<<arr[j]<<" ";
        cout<<endl;
        if(flag==1) break;
        if(i==0 && flag==0){
            arr[0] = num;
            for(int j=0; j<n; j++) cout<<arr[j]<<" ";
            
        }
    }

}