#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "geodetic_conv.hpp"

struct Data
{
    float x_;
    float y_;
    int frame_;

    Data();
    Data(float x, float y, int frame);
    void print();
};

std::vector<Data> readDataFromFile(std::string filename);


#endif /*UTILS_H*/