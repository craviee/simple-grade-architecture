#pragma once

class grade {

public:
    grade(unsigned long _studentId) : studentId(_studentId) {};
    ~grade() {};

public:
    unsigned long getStudentId() { return studentId; }
    double getValue() { return value; }
    bool isValidated() { return validated; }
    void setValue(double _value) { value = _value; }
    void setValidated(bool _validated) { validated = _validated; }

private:
    unsigned long studentId;
    double value = 0;
    bool validated = false;
};