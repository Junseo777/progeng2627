/*
 * 5.1 Exercise -- filtering values
 * Write a program that reads from the user a number n, then reads n numbers from the user and
 * stores them in a vector. The program then reads a number t from the user and prints all the
 * numbers in the vector that are less than t.
 */

#include <iostream>
#include <vector>

int main(){
    std::vector<int> n;
    int i{};
    std::cin>>i;
    for(int j=0;j<i;j++){
        int un{};
        std::cin>>un;
        n.push_back(un);
    }
    int t{};
    std::cin>>t;
    for(int k=0;k<n.size();k++){
        if(n[k]<t){
            std::cout<<n[k]<<'\n';
        }
    }
}
