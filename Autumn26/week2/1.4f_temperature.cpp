// 1.4 Exercises — Temperature Conversion
// Read Celsius; print Fahrenheit (F = C * 9/5 + 32 — watch integer division).

#include <iostream>
#include <string>

int main() {
    std::cout<<"Input a temperature in Celsius.";
    double temp_c{};
    std::cin>>temp_c;
    std::cout<<"Your temperature in Fahrenheit is: " << (temp_c * 1.8) + 32;

    return 0;
}
