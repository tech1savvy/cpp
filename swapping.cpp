#include <iostream>
using namespace std;

int main(){
    int x=2, y=3;
    
    x = x+y;
    y = x-y;
    x = x-y;

    printf("x:%d, y:%d",x, y);

    return 0;
}