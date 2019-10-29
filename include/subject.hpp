#pragma once

#include "grade.hpp"

#include <iostream>
#include <vector>

class subject {

public:
    subject(std::string _name, int _semester): name(_name), semester(_semester) {};

public:
    unsigned long getProfessorId() { return professorId; }
    void setProfessorId(unsigned long _professorId) { professorId = _professorId; }
    std::vector<grade> grades;

private:
    std::string name;
    int semester;
    unsigned long professorId = -1;
};