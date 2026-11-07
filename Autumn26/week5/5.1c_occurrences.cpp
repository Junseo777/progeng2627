/*
 * 5.1 Exercise -- occurrences (then: occurrences and indices)
 * Write a program that reads from the user a number n, then reads n integer numbers from the
 * user and stores them in a vector. The program then reads a number s from the user and prints
 * how many occurrences of s are contained in the vector.
 *
 * Then extend the program so that it also prints all the indices (if any) where s is found.
 *
 * Example (extended version):
 *   please enter n:
 *   5
 *   please enter a number:
 *   3
 *   please enter a number:
 *   2
 *   please enter a number:
 *   1
 *   please enter a number:
 *   3
 *   please enter a number:
 *   7
 *   please enter s:
 *   3
 *   there are 2 occurrences of 3 at indices:
 *   0
 *   3
 *
 * Same input with s = 9:
 *   there are no occurrences of 9
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
    int s{};
    std::cin>>s;
    int counter{0};
    std::vector<int> indexn;
    for(int k=0;k<n.size();k++){
        if(n[k]==s){
            counter+=1;
            indexn.push_back(k);

        }
    }
    std::cout<<"there are " << counter << " occurrences of " << s << " at indices: " <<'\n';
    for(int l=0;l<indexn.size();l++){
        std::cout<<indexn[l]<<'\n';
    }
}
