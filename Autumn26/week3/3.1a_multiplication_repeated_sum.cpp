// 3.1 Exercise: multiplication as repeated sum
//
// Similar to the example above in which we compute x^n as x * x * x... done n times
// (with n being an integer >= 0), write a program that computes x * n as x + x + x...
// done n times.
//
// (The x^n example on the page: read double x and int n with std::cin >> x >> n;
//  start acc = 1 and repeat acc = acc * x n times with a while loop and a counter,
//  then print  x << "^" << n << " = " << acc.)

#include <iostream>

int main(){

    double x{};
    int n{};
    std::cin>>x>>n;
    int counter{n};
    double sum{x};
    while (counter>1){
        sum += x;
        counter -=1;
    }
    std::cout<<x<<"*"<<n<<" = " << sum<< '\n';

    return 0;
}
