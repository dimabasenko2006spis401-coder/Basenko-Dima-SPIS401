#pragma once
#include "Book.h"

class Textbook : public Book {
private:
    std::string subject; 

public:
    
    Textbook(std::string t, std::string a, int y, std::string s)
        : Book(t, a, y), subject(s) {
    }

    void display() const override {
        std::cout << "[Учебник] " << title << " по предмету: " << subject << std::endl;
    }
};