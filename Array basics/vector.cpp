#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // vector<int> v;
    // cout<<v.size();
    // cout<<endl;
    // vector<int>v1(5,2);
    // cout<<v1.size();
    
    vector<int>v;
    v.push_back(10);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(15);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(20);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    
    v.pop_back();
    
    cout<<endl;
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    
    v.erase(v.begin()+0);
    
    cout<<endl;
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    v.insert(v.begin(),5);
    cout<<endl;
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    v.clear();
    cout<<endl;
    cout<<v.size();
    
    v.push_back(25);
    v.push_back(5);
    v.push_back(10);
    v.push_back(2);
    v.push_back(30);
    sort(v.begin(), v.end());
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    sort(v.begin(), v.end(), greater<int>());
    
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    } 
}
