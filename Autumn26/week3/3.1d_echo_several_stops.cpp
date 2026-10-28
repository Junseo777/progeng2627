// 3.1 Exercise: echo with several stops
//
// Same as above (echo with text, 3.1c) but the program stops also if the user enters
// "Stop" or "stop" (or "STOP" as above). You will need to use boolean operators to
// implement this condition.

#include <iostream>
#include <string>

int main(){
    std::string text{};
    std::cin>>text;
    while((text!="stop") && (text!="Stop") && (text!="STOP")){
        std::cout<<text<<'\n';
        std::cin>>text;
    }
    

    return 0;
}
