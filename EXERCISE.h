#pragma once
#include <string>

class Student {
protected:
    std::string firstName;
    std::string lastName;
public:
    Student() : firstName("Unknown"), lastName("Unknown") {}
    Student(std::string first, std::string last) : firstName(first), lastName(last) {}

    const std::string& FirstName() const {
        return firstName;
    }
    const std::string& LastName() const {
        return lastName;
    }
    Student& FirstName(const std::string setName) {
        this->firstName = setName;
        return *this;
    }
    Student& LastName(const std::string setName) {
        this->lastName = setName;
        return *this;
    }
    bool operator==(const Student& other) const {
        return this->firstName == other.firstName and this->lastName == other.lastName;
    }
};
