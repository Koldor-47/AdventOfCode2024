#include "Part_b.h"



int part_b(std::vector<int> data_in, std::unordered_map<int, int> &Data) {
    int total_score = 0;

    for (long unsigned int i = 0; i < data_in.size(); i++) {
        if (Data.contains(data_in[int(i)])) {
            std::cout << data_in[i] << " X " << Data[data_in[i]] << std::endl;
            total_score += (data_in[i] * Data[data_in[i]]);
        } else {
            std::cout << "Not Found: " << data_in[i] << std::endl;
        }
    }

    return total_score;
}

std::unordered_map<int, int> build_location_count(std::vector<int> right_col) {
    std::unordered_map<int, int> location_count;

    for (int right_location : right_col) {
        if (!location_count.contains(right_location)) {
            location_count.insert({right_location, 1});
        } else {
            location_count[right_location]++;
        }
    }

    return location_count;  
}