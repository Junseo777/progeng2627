/*
 * 4.2.1 Functions: passing by reference (1) -- swapping text
 * Write a function that swaps two variables of type std::string (pass by reference).
 * Write a main to test it.
 */

#include <iostream>
#include <string>

void swap(std::string& s11, std::string& s22){
    std::string tmp{};
    tmp = s11;
    s11 = s22;
    s22 = tmp;
}

int main(){
    std::string s1{};
    std::cin>>s1;
    std::string s2{};
    std::cin>>s2;

    std::cout<<"s1 = " << s1 << '\n' << "s2 = " << s2<< '\n';
    swap(s1,s2);
    std::cout<<"s1 = " << s1 << '\n' << "s2 = " << s2 << '\n'; 

}
