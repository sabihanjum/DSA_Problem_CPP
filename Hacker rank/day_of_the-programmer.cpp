#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    int tot_days_eight = 0;
    if(year<1918){
        tot_days_eight = 243;
        if(year%4==0) tot_days_eight+=1;
    }
    else if(year == 1918){
        tot_days_eight=230;
        if(year % 4 == 0 && year %100 != 0) tot_days_eight+=1;
    }
    else if(year>1918){
        tot_days_eight=243;
        if(year%400 == 0) tot_days_eight+=1;
        else if(year%4==0 && (year%100)!=0) tot_days_eight+=1;
    }
    string ans = "";
    int day = 256 - tot_days_eight;
    string d = to_string(day);
    string y = to_string(year);
    if(d.size()==2){
        ans+=d;
    }
    else{
        ans+='0';
        ans+=d;
    }
    ans+='.';
    ans+="09.";
    ans+=y;
    return ans;

}