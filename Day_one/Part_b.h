#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

int part_b(std::vector<int> data_in, std::unordered_map<int, int> &Data);
std::unordered_map<int, int> build_location_count(std::vector<int> right_col);