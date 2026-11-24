/*
 * 6.3 Exercise -- counting occurrences
 * Write a program which computes the number of occurrences of some specific words in a text.
 * The program initially reads in input the names of two text files. One is some text, read
 * word by word and stored in a vector of strings (text.txt, the page's example, is in this
 * folder). The other contains a few words whose occurrences we want to count (words.txt: the,
 * I, in).
 * The program then reads the name of a file for the output; for the example it should print on
 * the output file:
 * the: 5
 * I: 4
 * in: 2
 * Make sure you use good functional decomposition. You can use == also on type std::string.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> text_to_vector(std::string y){
    
    std::ifstream text;
    text.open(y);

    if(!text.is_open()){
        std::cout<<"error opening file!"<<'\n';
        return {};
    }

    std::vector<std::string> vtext{};
    std::string tmp{};
    while(text>>tmp){
        vtext.push_back(tmp);
    }
    
    text.close();
    return vtext;
}

int word_count(std::vector<std::string> vtext, std::string word){
    int counter{0};
    for(int i=0;i<vtext.size();i++){
        if(vtext[i]==word){
            counter++;
        }
    }
    return counter;
}

int main(){

    std::vector<std::string> vtext{text_to_vector("text.txt")};

    std::ifstream words;
    words.open("words.txt");

    if(!words.is_open()){
        std::cout<<"error opening file!"<<'\n';
        return EXIT_FAILURE;
    }

    std::ofstream output;
    output.open("output.txt");

    if(!output.is_open()){
        std::cout<<"error opening file!"<<'\n';
        return EXIT_FAILURE;
    }

    std::string tmp{};

    while(words>>tmp){
        output << tmp <<": " << word_count(vtext, tmp) << '\n';
    }
}
