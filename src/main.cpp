#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book class
class Book {
public:
    int id;
    string title;
    string author;
    bool isBorrowed;

    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isBorrowed = false;
    }
};

// User class
class User {
public:
    int userId;
    string name;

    User(int id, string n) {
        userId = id;
        name = n;
    }
};

// Library class
class Library {
private:
    vector<Book> books;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void displayBooks() {
        for (Book b : books) {
            cout << b.id << " | " << b.title << " | " << b.author;
            if (b.isBorrowed)
                cout << " | Borrowed";
            else
                cout << " | Available";
            cout << endl;
        }
    }
};

int main() {
    Library lib;

    lib.addBook(Book(1, "Clean Code", "Robert Martin"));
    lib.addBook(Book(2, "C++ Primer", "Lippman"));

    cout << "Library Books:" << endl;
    lib.displayBooks();

    return 0;
}

