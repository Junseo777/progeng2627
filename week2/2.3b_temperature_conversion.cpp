// 2.3 Exercise: temperature conversion (+ 'One more check': test unit conversion error message)
// Copy 2.3a and extend it as asked.

#include <iostream>
#include <string>

int main(){

    double temp_in{};
    std::cin>>temp_in;
    
    char unit_in{};
    std::cin>>unit_in;

    char unit_out{};
    double temp_out{};

    if(unit_in == 'F'){
        unit_out = 'C';
        temp_out = (temp_in-32)/1.8;
    }
    else{
        unit_out = 'F';
        temp_out = (temp_in * 1.8) + 32;
    }

    std::cout<<temp_out<< " " <<unit_out;

}