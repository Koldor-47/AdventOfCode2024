#include <iostream>
#include <string>
#include <sstream>

#include "utils/utils.h"
#include "Day_one/dayOne.h"

int main(int, char**) {
    std::cout << "Advent of Code 2024" << std::endl;

    std::vector<std::string> test_me = read_data_txt("Day_one/puzzle.txt");

    std::cout << "Day One Part A: " << std::endl;

    std::unordered_map<std::string, std::vector<int>> day_one_data = get_day_one(test_me);

    int day_one_a = get_total_score(day_one_data["left_list"], day_one_data["right_list"]);

    std::cout << day_one_a << std::endl;


    return 0;
}