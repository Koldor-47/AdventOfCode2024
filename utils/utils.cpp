#include "utils.h"

//
// Reading AOC data into a vector row by row.
//

std::vector<std::string> read_data_txt(std::string filePath){
    std::vector<std::string> the_data;
    std::string line;
    std::fstream openFile;

    openFile.open(filePath);
    if (openFile.good()) {
        while (std::getline(openFile, line)) {
            the_data.push_back(line);
        }
        openFile.close();
    } else {
        std::cerr << "Can't find file" << std::endl;
    }

    return the_data;
}