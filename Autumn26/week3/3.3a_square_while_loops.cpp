// 3.3 Exercise: bidimensional figure with while loops
//
// The page's program reads a positive integer n and draws an n x n figure of * symbols
// using two nested for loops (inner loop prints one row of n stars with no endl; outer
// loop repeats that n times, printing std::endl after each row). For example:
//
//     4
//     ****
//     ****
//     ****
//     ****
//
//     2
//     **
//     **
//
// Could we have written the program above using while loops? Yes, but it would have
// arguably been considerably less convenient. As an exercise, rewrite the program above
// using while loops.

#include <iostream>

int main(){
    int n{};
    std::cin>>n;
    int counter1{0};
    int counter2{0};

    while(counter1<n){
        while(counter2<n){
            std::cout<<'*';
            counter2++;
        }
        std::cout<<'\n';
        counter1++;
        counter2 = 0;
    }

    return 0;
}
