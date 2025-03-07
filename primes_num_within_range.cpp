#include <iostream>

using namespace std;

int main() {
    int s=1;
    int e=5;
    
    int count_prime_num=0;
    
    for(int i=s;i<=e;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            count_prime_num++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<count_prime_num;
    
}