// 3.1 Exercise: echo with text
//
// Write a variation of the program "Echo" that instead of working with integer numbers
// works with text. The program stops when the user enters "STOP" (the "STOP" shouldn't
// be printed).

#include <iostream>
#include <string>

int main(){
    std::string text{};
    std::cin>>text;
    while(text!="STOP"){
        std::cout<<text<<'\n';
        std::cin>>text;
    }
    

    return 0;
}
