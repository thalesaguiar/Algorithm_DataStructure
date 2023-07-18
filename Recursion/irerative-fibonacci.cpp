using namespace std;
#include <iostream>

//Fibonacci Sequence Iterative

int Fib(int n){
    if(n == 0){
        return 0;
    }

    int current = 1, previus = 0, beforeThePrevious = 0 ;  
    for(int i = 0; i < n; i++){
        beforeThePrevious = previus;
        previus = current;
        current = previus + beforeThePrevious;
    }
    return current;
};

int main(){
    
    int n;
    cin >> n;
     
    cout << "The Fibonnacci of " << n << " is " << Fib(n) << endl;

    return 0;
}
