#pragma once
#include <vector>
#include "Book.h"
#include "Fiction.h"
#include "Textbook.h"

class Library {
private:
    std::vector<Book*> books;

public:
    void addBook(Book* b) {
        books.push_back(b);
    }

    void showAll() const {
        std::cout << "--- Список книг в библиотеке ---" << std::endl;
        for (const auto& book : books) {
            book->display();
        }
    }

    ~Library() {
        for (auto b : books) delete b;
    }
};