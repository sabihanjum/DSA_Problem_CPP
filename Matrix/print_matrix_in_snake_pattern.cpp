#include <iostream>

using namespace std;

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int row= sizeof(arr)/sizeof(arr[0]);
    int col= sizeof(arr[0])/sizeof(arr[0][0]);
    
    (int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }else{
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}