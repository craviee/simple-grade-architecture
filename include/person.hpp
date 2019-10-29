#pragma once

#include <iostream>

class person {

public:
    person(unsigned long _id, std::string _name, std::string _email, std::string _password) : id(_id), name(_name), email(_email), password(_password) { };
    ~person(){};

public:
    void login() { isConnected = true; };
    void logout() { isConnected = false; };
    std::string getName() { return name; };
    unsigned long getId() { return id; };

protected:
    unsigned long id;
    std::string name;
    std::string email;
    std::string password;
    bool isConnected = false;
};