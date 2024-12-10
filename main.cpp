#include <iostream>
#include <string>
#include <sstream>

#include "utils/utils.h"
#include "Day_one/dayOne.h"

int main(int, char**) {
    std::cout << "Advent of Code 2024" << std::endl;

    std::vector<std::string> test_me = read_data_txt("Day_one/puzzle.txt");

    std::cout << "Day One Part A: "<< get_day_one(test_me) << std::endl;


    return 0;
}