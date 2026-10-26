// 2.3 Exercise: temperature conversion with boolean operators
// Copy 2.3c and rewrite the checks with && / ||.

#include <iostream>
#include <string>

int main(){

    double temp_in{};
    std::cin>>temp_in;
    
    char unit_in{};
    std::cin>>unit_in;

    char unit_out{};
    double temp_out{};

    bool valid_unit = true;

    if((unit_in == 'F') || (unit_in == 'f')){
        unit_out = 'C';
        temp_out = (temp_in-32)/1.8;
    }
    else if((unit_in == 'C')||(unit_in == 'c')){
        unit_out = 'F';
        temp_out = (temp_in * 1.8) + 32;
    }
    else{
        valid_unit = false;
    }
    if(valid_unit){
    std::cout<<temp_out<< " " <<unit_out;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}
