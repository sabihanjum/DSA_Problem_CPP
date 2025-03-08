#include <iostream>

using namespace std;

int main() {
    int arr[]={1,2,3,2,4,4,5,5,6,7,6};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int count=0;
    
    bool vis[100]={false};
    
    for(int i=0;i<n;i++){
        if(vis[arr[i]]==false){
            count++;
            vis[arr[i]]=true;
        }
    }
    
    cout<<count;
}