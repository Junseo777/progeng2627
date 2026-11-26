#include <iostream>
#include <string>
#include <vector>

std::string get_row(int row_i, const std::vector<std::string>& grid){
    return grid[row_i];
}

std::string get_col(int col_start_i, const std::vector<std::string>& grid){
    int rowlen{static_cast<int>(grid[0].size())};
    int col_i{col_start_i};
    std::string s_col{};
    for(std::size_t i{0}; i<grid.size(); i++){
        s_col.push_back(grid[i][col_start_i]);
        col_i += rowlen;
    }
    return s_col;
}

bool pre_output_line(std::string& line, std::string word){
    int counter{0};
    int L{0};
    int word_length{static_cast<int>(word.size())};
    for(int R{0}; R<static_cast<int>(line.size());R++){
        if(line[R]==word[counter]){
            counter++;
        }
        else{
            while(L<=R){
                line[L]='#';
                L++;
            }
            counter = 0;
        }
        if(counter>word_length){
            while(R<=line.size()){
                line[R]='#';
                R++;
            }
            return true;
        }
    }
    return false;
}

std::string output_line(std::string line, const std::vector<std::string>&words){
    std::string tmp{line};
    std::string sout(line.size(),'#');
    std::vector<std::string> uncombined_lines{};
    for(std::size_t i{0}; i<words.size(); i++){
        if(pre_output_line(tmp, words[i])){
            uncombined_lines.push_back(line);
        }
        tmp = line;
    }
    for(std::size_t i{0}; i<uncombined_lines.size(); i++){
        for(std::size_t j{0}; j<line.size(); j++){
            if(uncombined_lines[i][j]!='#'){
                sout[j]=uncombined_lines[i][j];
            }
        }
    }
    return sout;
}

std::vector<std::string> row_grid(const std::vector<std::string>& grid, const std::vector<std::string>& words){
    std::vector<std::string> v_row_grid{};
    for(size_t i{0}; i<grid.size(); i++){
            v_row_grid.push_back(output_line(get_row(i, grid),words));
    }
    return v_row_grid;
}

std::vector<std::string> col_grid(const std::vector<std::string>& grid,const std::vector<std::string>& words){
    std::vector<std::string> v_col_grid{};
    for(size_t i{0}; i<grid[0].size(); i++){
        v_col_grid.push_back(output_line(get_col(i, grid),words));
    }
    return v_col_grid;
}

std::vector<std::string> mxn_2_nxm(const std::vector<std::string>& mxn){
    std::vector<std::string> nxm{};
    for(std::size_t i{0}; i<mxn.size();i++){
        for(std::size_t j{0}; j<mxn.size();j++){
            
        }
        for(std::size_t k{0}; k<mxn[0].size(); k++){

        }
    }
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){

}