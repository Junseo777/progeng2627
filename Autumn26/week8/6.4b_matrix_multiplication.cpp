/*
 * 6.4 Exercise -- implement matrix multiplication
 * Considering the program above implementing the matrix sum, write a
 * program that implements the matrix multiplication. Make sure you use good functional
 * decomposition. In particular, define and use:
 * - A function that performs the scalar product of two vectors.
 * - A function that "extracts" a certain column from a matrix.
 * (Matrices are vectors of vectors; dimensions assumed coherent, input not validated.)
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// useful for manipulation of strings
#include <sstream>

// to set precision when printing
#include <iomanip>

std::vector<int> line_to_vector(const std::string& s){
    std::vector<int> vout;
    int x{};
    std::istringstream ss(s);
    while(ss>>x){
        vout.push_back(x);
    }
    return vout;
}

std::vector<std::vector<int>> text_to_matrix(const std::string& text){
    std::ifstream infile;
    infile.open(text);
    if(!infile.is_open()){
        std::cout<<"fail"<<'\n';
        return {};
    }
    std::string line{};
    std::vector<std::vector<int>> vout{};
    while(std::getline(infile, line)){
        vout.push_back(line_to_vector(line));
    }
    return vout;
}

std::vector<int> extract_column(const std::vector<std::vector<int>>& matrix, int j){
    std::vector<int> vout;
    for(int i=0; i<matrix.size(); i++){
        vout.push_back(matrix[i][j]);
    }
    return vout;
}

int scalar_product(const std::vector<int>& row, const std::vector<int>& column){
    int out{};
    for(int i=0; i<row.size(); i++){
        out += row[i]*column[i];
    }
    return out;
}

std::vector<std::vector<int>> matrix_multiplication(const std::vector<std::vector<int>>& a,const std::vector<std::vector<int>>& b){
    
    std::vector<int> line;
    std::vector<std::vector<int>> matrix;
    for(int i=0; i<a.size();i++){
        for(int j=0; j<b[0].size();j++){
            line.push_back(scalar_product(a[i],extract_column(b, j)));
        }
        matrix.push_back(line);
        line = {};
    }
    return matrix;
}

int main(int argc, char* argv[]){

    if(argc!=3){
        std::cout<<"Two arguments needed"<<'\n';
        return EXIT_FAILURE;
    }
    matrix_multiplication(text_to_matrix(argv[1]), text_to_matrix(argv[2]));

}