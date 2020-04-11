#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Level {
public:
    Level() {}
    ~Level() {}

    std::vector<std::vector<int>> loadLevel();

private:
    int currentLevel = 1;
    
    std::vector<std::vector<int>> readFile();
};

#endif // LEVEL_H