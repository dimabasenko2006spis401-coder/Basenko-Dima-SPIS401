#pragma once
#include <string>
#include <iostream>

class Book {
protected:
    std::string title;
    std::string author;
    int year;

public:
    
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    virtual void display() const {
        std::cout << "Книга: " << title << ", Автор: " << author << ", Год: " << year << std::endl;
    }

    virtual ~Book() {}
};