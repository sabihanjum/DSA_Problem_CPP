#include <iostream>
using namespace std;
int main() {
    int  arr [] = {1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int even_sum=0;
    int odd_sum=0;  
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_sum+=arr[i];
        }else{
            odd_sum+=arr[i];
        }
    }
    cout<<odd_sum<<" "<<even_sum;
}
