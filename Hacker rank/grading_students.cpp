#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> a) {
    for(int i = 0; i<a.size(); i++){
        if(a[i] <38) continue;
        else{
            if(a[i]%5 == 0) continue;
            else{
                int num=a[i];
                int ld = num%10;
                num = num/10;
                int newel = -1;
                if(ld>0 && ld<5){
                    newel = num*10+5;
                }
                else if(ld>5 && ld<=9){
                    newel = (num+1) *10+0;
                }
                if(newel-a[i]<3) a[i] = newel;
            }
        }
    }
    return a;

}