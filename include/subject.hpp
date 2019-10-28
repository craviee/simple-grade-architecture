#pragma once

#include <iostream>

class subject {

public:
    subject(std::string _name, int _semester): name(_name), semester(_semester) {};

private:
    std::string name;
    int semester;
};