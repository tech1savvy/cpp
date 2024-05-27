#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    bool isPrime;
    for(int i=2;i<=num;i++){
        isPrime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
                continue;
            }
        }
        if(isPrime)
            cout<<i<<endl;
    }

    return 0;
}