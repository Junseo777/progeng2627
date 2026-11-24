/*
 * 6.3 Exercise -- palindromes
 * Complete the following draft (is_palindrome).
 * (Indexing strings, from the page: s[i] on a std::string is a char, not a std::string --
 * compare it with a char ('l', single quotes), or convert it with char_to_string first.)
 */

#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    // complete this function
    int L{0};
    int R{};
    R=s.size()-1;
    while(L<R){        
        if(s[L]==' '){
            L+=1;
        }
        if(s[R]==' '){
            R-=1;
        }
        if(s[L]!=s[R]){
            return false;
        }
        L+=1;
        R-=1;
    }
    return true;


}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}
