#pragma once
#include "Book.h"

class Fiction : public Book {
private:
    std::string genre; // Жанр

public:
    
    Fiction(std::string t, std::string a, int y, std::string g)
        : Book(t, a, y), genre(g) {
    }

    void display() const override {
        std::cout << "[Художественная] " << title << " (" << genre << "), " << author << std::endl;
    }
};