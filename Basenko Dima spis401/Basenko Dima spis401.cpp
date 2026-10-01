#include <iostream>
#include <windows.h> 
#include "Library.h"
#include "Fiction.h"
#include "Textbook.h"

using namespace std;

int main() {
    // Настройка кодировки для корректного отображения русского текста
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Library myLibrary;

    
    Book* b1 = new Book("Война и мир", "Л. Толстой", 1869);

   
    Book* b2 = new Fiction("Гарри Поттер", "Дж. Роулинг", 1997, "Фэнтези");

    
    Book* b3 = new Textbook("Алгебра 9 класс", "Макарычев", 2020, "Математика");

    // Добавляем книги в библиотеку
    myLibrary.addBook(b1);
    myLibrary.addBook(b2);
    myLibrary.addBook(b3);

    // Выводим список всех книг
    myLibrary.showAll();

    return 0;
}