#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,5,7,8,8};
    int target=8;
    int n= sizeof(arr)/sizeof(arr[0]);  
    int first_ind=-1;
    int last_ind=-1;    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            first_ind=i;
            break;
        }
    }    
    for(int i=n-1;i>=0;i--){
        if(arr[i]==target){
            last_ind=i;
            break;
        }
    }    
    cout<<first_ind<<" "<<last_ind;
}
