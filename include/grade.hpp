#pragma once

class grade {

public:
    grade(unsigned long _studentId) : studentId(_studentId) {};
    ~grade();

public:
    unsigned long studentId;
    double value = 0;
    bool validated = false;

public:
    void validateGrade() { validated = true; }
};