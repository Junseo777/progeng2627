// 3.1 Exercises: the average so far
//
// Write a program that keeps reading integers from the users (stopping when the user
// enters 0) and after each number read prints what's the average of the numbers at that
// point. Note that the numbers in input are integers but the average will not always be
// an integer. For example:
//
//     enter a number:
//     3
//     the average so far is:
//     3
//     enter a number:
//     5
//     the average so far is:
//     4
//     enter a number:
//     -1
//     the average so far is:
//     2.3333
//     enter a number: 2
//     the average so far is:
//     2.25
//     enter a number: 0

#include <iostream>

int main(){
    double x{};
    int sum{};
    double counter{0};
    std::cin>>x;

    while(x!=0){
        sum +=x;
        counter+=1;
        std::cout<<"The average so far is "<<sum/counter<<'\n';
        std::cin>>x;

    }
   
    return 0;
}

