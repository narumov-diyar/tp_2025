#ifndef READFILE_HPP
#define READFILE_HPP
#include <sstream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include "Structs.hpp"

namespace vlad {
    Polygon parsePolygon(const std::string& str);
    std::vector<Polygon> readFile(const std::string& fileName);
}

#endif

