// 1.4 Exercises — BMI calculator
// Prompt, read into suitable variables, compute and print, as the page lists.

#include <iostream>
#include <string>

int main() {
    
    double weight{};
    double height{};
    std::cout<<"Input your weight in kilograms and your height in metres.";
    std::cin>>weight;
    std::cin>>height;
    double BMI{};
    BMI = weight/(height*height);
    std::cout<<"Your BMI is: " << BMI;

    return 0;
}
