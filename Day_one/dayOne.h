#pragma once
#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <ranges>
#include <sstream>
#include <algorithm>
#include <unordered_map>

std::unordered_map<std::string, std::vector<int>>  get_day_one(std::vector<std::string> data_in);

int get_total_score(std::vector<int> left_list, std::vector<int> right_list);