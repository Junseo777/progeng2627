/*
 * 6.2 Exercise -- fruit sets
 * Two warehouses contain several varieties of fruits, stored in text files (warehouse1.txt and
 * warehouse2.txt, the page's examples, are in this folder). The program creates two text
 * files, union.txt and intersection.txt.
 * For the example input: union.txt = strawberries, apples, watermelons, blackberries, lemons,
 * pears, blueberries, grapes; intersection.txt = apples, watermelons (any order, one per
 * line).
 * Implement union_vector and intersection_vector (signatures below), and search_vector "with
 * similar behaviour to ones we have seen before" -- use it in both union_vector and
 * intersection_vector.
 * Write a main that:
 * 1. Reads the names of the two text files for the input.
 * 2. Reads the content of the text files and stores the information into vectors.
 * 3. Computes the union using union_vector and stores the result in a text file called
 * union.txt.
 * 4. Computes the intersection using intersection_vector and stores the result in a text file
 * called intersection.txt.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0;i<vin.size();i++){
        if(s == vin[i]){
            return 1;
        }
    }
    return -1;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0;i<vin1.size();i++){
        if(search_vector(vin1[i],vin2)==1){
            vout.push_back(vin1[i]);
        }
    }
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    if(vin1.size()<vin2.size()){
        for(int i=0;i<vin2.size();i++){
            vout.push_back(vin2[i]);
        }
        for(int i=0;i<vin1.size();i++){
            bool flag{false};
            for(int j=0;j<vin2.size();j++){
                if(vin1[i]==vin2[j]){
                    flag = true;
                }
            }
            if(flag!=true){
                vout.push_back(vin1[i]);
            }
        }
    }
    else{
        for(int i=0;i<vin1.size();i++){
            vout.push_back(vin1[i]);
        }
        for(int i=0;i<vin2.size();i++){
            bool flag{false};
            for(int j=0;j<vin1.size();j++){
                if(vin2[i]==vin1[j]){
                    flag = true;
                }
            }
            if(flag!=true){
                vout.push_back(vin2[i]);
            }
        }
    }
}

int main(){
    std::ifstream infile1{};
    std::ifstream infile2{};
    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");
    std::vector<std::string> vin1{};
    std::string tmp1{};
    while(infile1>>tmp1){
        vin1.push_back(tmp1);
    }
    std::vector<std::string> vin2{};
    std::string tmp2{};
    while(infile2>>tmp2){
        vin2.push_back(tmp2);
    }
    std::vector<std::string> vout{};
    intersection_vector(vin1, vin2, vout);
    std::ofstream outfile1{};
    outfile1.open("intersection.txt");
    for(int i=0;i<vout.size();i++){
        outfile1<<vout[i]<<'\n';
    }
    vout = {};
    union_vector(vin1, vin2, vout);
    std::ofstream outfile2{};
    outfile2.open("union.txt");
    for(int i=0;i<vout.size();i++){
        outfile2<<vout[i]<<'\n';
    }
}
