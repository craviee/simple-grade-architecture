#pragma once

#include <iostream>

class person {

protected:
    person(unsigned long _id, std::string _name, std::string _email, std::string _password) : id(_id), name(_name), email(_email), password(_password) { };

public:
    void login() { isConnected = true; };
    void logout() { isConnected = false; };
    unsigned long getId() { return id; };

protected:
    unsigned long id;
    std::string name;
    std::string email;
    std::string password;
    bool isConnected = false;
};