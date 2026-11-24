/*
 * 6.3 Exercise -- translating
 * Write a program which reads from the user the name of two files, one containing some
 * advertisement text (ad.txt: "exclusive cosy bedsit in a quiet area") and the other
 * containing the "real meaning" of some of the words (meanings.txt: exclusive expensive / cosy
 * small / bedsit room / quiet remote).
 * The program reads the content of the files and suitably stores it in memory, then it
 * "translates" the ad by using the "real meaning" provided and finally (after reading from the
 * user the name of a file for the output) prints the result on an output file.
 * Make sure you use good functional decomposition.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> text_to_vector(std::string text){
    std::ifstream input;
    input.open(text);

    if(!input.is_open()){
        std::cout<<"failed to open!"<<'\n';
        return {};
    }

    std::string tmp;
    std::vector<std::string> vtext;
    while(input>>tmp){
        vtext.push_back(tmp);
    }

    return vtext;
}

std::vector<std::string> meaning_to_vector(std::string text){
    std::ifstream input;
    input.open(text);

    if(!input.is_open()){
        std::cout<<"failed to open!"<<'\n';
        return {};
    }

    std::string tmp;
    std::vector<std::string> vtext;
    while(input>>tmp){
        vtext.push_back(tmp);
    }

    return vtext;
}

void translated(std::vector<std::string> vtext, std::vector<std::string> vmeaning, std::string output){
    std::ofstream outfile;
    outfile.open(output);

    for(int i=0;i<vtext.size();i++){
        int counter{1};
        int flag{0};
        for(int j=0;j<vmeaning.size(); j+=2){
            if(vtext[i]==vmeaning[j]){
                outfile<<vmeaning[j+1]<< " ";
                flag = 1;
            }
            counter++;
        
        if(flag==0 && counter == vmeaning.size()/2){
            outfile<<vtext[i] << " ";
        }
        }
    }

}


int main(){
    translated(text_to_vector("ad.txt"), meaning_to_vector("meanings.txt"), "output.txt");

}
