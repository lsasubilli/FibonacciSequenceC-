#include <iostream>

using namespace std;

int feb(int n){
    if(n<=1){
        return n;
    }
    return feb(n-1)+ feb(n-2);
}
int main(){


    std::cout<<feb(5)<<std::endl;
    return 0;
}


