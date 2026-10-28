// 3.1 Exercise: echo within range
//
// Echo (the version that does NOT print the 0): read an integer before the loop;
// while(n != 0) { print n; read n again }.
//
// Now let's assume we want the repetition to take place only if the user inputs a
// number between -10 and 10, extremes included. You may think that we can write this
// condition in the loop as:
//
//     while(-11 < n < 11){ // wrong
//         ...
//     }
//
// But this would actually not be correct. The program would run but not in the correct
// way. This must be written using the boolean operators as follows:
//
//     while( (-11 < n) && (n < 11) ){
//         ...
//     }
//
// Complete and test this version of the program.

#include <iostream>
int main(){
    int n{};
    std::cin>>n;
    while((-11<n)&&(n<11)){
        std::cout<<n<<'\n';
        std::cin>>n;
    }
    return 0;
}
