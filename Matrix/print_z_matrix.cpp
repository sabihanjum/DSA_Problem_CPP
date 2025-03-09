#include <iostream>

using namespace std;

int main() {
    int arr[4][4]={{1,2,3,4},{5,5,7,8},{7,8,9,10},{8,9,10,11}};
    
    int row= sizeof(arr)/sizeof(arr[0]);
    int col= sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i=0;i<row;i++){
        cout<<arr[0][i]<<" ";
    }
    
    int i=1;
    int j=col-2;
    
    while(i<row && j>=0){
        cout<<arr[i][j]<<" ";
        i++;
        j--;
    }
    
    for(int i=1;i<row;i++){
        cout<<arr[row-1][i]<<" ";
    }
}