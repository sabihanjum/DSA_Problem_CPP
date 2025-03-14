#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word) {
    unordered_map<int, int> mp;
    char ch = 'a';
    for(int i=0; i<26; i++){
        mp[ch]=i;
        ch++;
    }
    int width = word.size();
    int max_height = 0;
    for(int i=0; i<word.size(); i++){
        int idx = mp[word[i]];
        int height = h[idx];
        max_height = max(max_height, height);
    }
    return max_height * width;
}

