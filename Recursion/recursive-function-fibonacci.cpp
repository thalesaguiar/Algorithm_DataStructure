using namespace std;
#include <iostream>

//Fibonacci Sequence

int Fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return Fib(n-1) + Fib(n-2);
    }

};

int main(){
    
    int n;
    cin >> n;
     
    cout << "The Fibonnacci of " << n << " is " << Fib(n) << endl;

    return 0;
}
