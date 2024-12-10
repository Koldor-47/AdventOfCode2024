#include "dayOne.h"

int get_day_one(std::vector<std::string> data_in){
    // Just teseting Function

    std::vector<int> left_col;
    std::vector<int> right_col;

    int total_score = 0;

    for (std::string &data_line : data_in){
        
        std::stringstream my_ss(data_line);
        std::string the_buffer;

        int left_num;
        int right_num;

        while (!(my_ss.eof())) {
            my_ss >> left_num >> right_num;
            left_col.push_back(left_num);
            right_col.push_back(right_num);
        }
    }

    std::sort(left_col.begin(), left_col.end());
    std::sort(right_col.begin(), right_col.end());

    for (unsigned i = 0; i < left_col.size(); ++i){
        int sub_total = std::abs(left_col[i] - right_col[i]);

        total_score += sub_total;
    }


    return total_score;
};