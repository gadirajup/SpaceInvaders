#include "level.h"

std::vector<std::vector<int>> Level::loadLevel() {
    auto lvl = readFile();
}

std::vector<std::vector<int>> Level::readFile() {
    std::vector<std::vector<int>> lvl;

    std::stringstream levelPath;
    levelPath << "../levels/lvl" << std::to_string(currentLevel) << ".txt";

    std::string line;
    std::ifstream file(levelPath.str());

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::vector<int> row;
            for (char c: line) {
                row.push_back((int)c);
            }
            lvl.push_back(row);
        }
        file.close();
    } else {
        std::cout << "Unable to open level" << std::endl;
    }

    return lvl;
}