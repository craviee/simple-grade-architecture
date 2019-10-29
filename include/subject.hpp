#pragma once

#include "grade.hpp"

#include <iostream>
#include <vector>

class subject {

public:
    subject(std::string _name, int _semester): name(_name), semester(_semester) {};

private:
    std::string name;
    int semester;
    unsigned long professorId = -1;

public:
    std::vector<grade> grades;
    unsigned long getProfessorId() { return professorId; }
    void setProfessorId(unsigned long _professorId) { professorId = _professorId; } 
};