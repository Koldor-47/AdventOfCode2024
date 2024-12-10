#include "dayOne.h"

std::unordered_map<std::string, std::vector<int>> get_day_one(std::vector<std::string> data_in){
    // Just teseting Function
    std::unordered_map<std::string, std::vector<int>> map_locations;

    std::vector<int> left_col;
    std::vector<int> right_col;

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

    map_locations["left_list"] = left_col;
    map_locations["right_list"] = right_col;

    return map_locations;

};

int get_total_score(std::vector<int> left_list, std::vector<int> right_list){
    int total_score;

    std::sort(left_list.begin(), left_list.end());
    std::sort(right_list.begin(), right_list.end());

    for (unsigned i = 0; i < left_list.size(); ++i){
        int sub_total = std::abs(left_list[i] - right_list[i]);

        total_score += sub_total;
    }


    return total_score;

};