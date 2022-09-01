#include <iostream>

using namespace std;

int factorial(int n){
    if(n<=1){
        return n;
    }
    return factorial(n-1)+ factorial(n-2);
}
int main(){


    std::cout<<factorial(5)<<std::endl;
    return 0;
}


