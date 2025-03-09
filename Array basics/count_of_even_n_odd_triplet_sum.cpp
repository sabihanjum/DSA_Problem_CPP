#include <iostream>

using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int odd_count=0;
    int even_count=0;
    
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int triplet_sum=arr[i]+arr[j]+arr[k];
                if(triplet_sum%2==0){
                    even_count++;
                }else{
                    odd_count++;
                }
            }
        }
    }
    cout<<even_count<<" "<<odd_count;
}