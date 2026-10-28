// 3.4 Exercise: guess the number
//
// Write a program which "guesses" (better: finds out using an algorithm) what (integer)
// number the user is thinking, given a range (lower bound and higher bound) and, after
// each attempt, feedback from the user on whether the attempted value is less or greater
// than the actual number.

#include <iostream>
#include <string>

int main(){
    int L{};
    std::cin>>L;
    int R{};
    std::cin>>R;
    int mid{};
    std::string feedback;
    bool flag{false};


    while(L<R && flag!=true){
        mid = L - (L-R)/2;
        std::cout<<"is your number lower or higher than " << mid;
        std::cin>>feedback;
        if(feedback == "lower"){
            R = mid;
        }
        else if (feedback == "higher"){
            L = mid;
        }
        else if(feedback != "lower" && feedback!= "higher"){
            flag = true;
        }
        }
        
        
    return 0;
}
