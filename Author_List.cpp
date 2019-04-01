#include <iostream>
#include <string>

using namespace std;

// Created by Zach Wozich 2-18-2018
// class Book
// with three private data fields: book title, author, copyright, and price
// four public methods to retrieve fields (called "getters")
// and one public non-default constructor

class Book {

  public:
     
      // member function prototypes
      void assign (string, string, int, float, int, string);   // this is your constructor
      string getTitle();
      string getAuthor();
      int    getCopyRightYear();
      float  getPrice();
      int	 getPages();
      string getISBN();
  

  private:

      // data members
      string title;
      string author;
      int    copyRightYear;
      float  price;
      int	pages;
      string isbn;
};


// these are the actual member functions

// this member function is a "constructor" that will create a new book
void Book::assign (string bookTitle, string bookAuthor, int bookDate, float bookPrice, int bookPages, string bookISBN) {
            title = bookTitle;
            author = bookAuthor;
           copyRightYear = bookDate;
            price = bookPrice;  
            pages = bookPages;
            isbn = bookISBN;
}

// this member function is a "getter" that will retrieve that book title value
string Book::getTitle() {
            return title;
}

// this member function is a "getter" that will retrieve the primary book author value
string Book::getAuthor() {
            return author;
}

// this member function is a "getter" that will retrieve the year the book was copyrighted
int Book::getCopyRightYear() {
            return copyRightYear;
}

// this member function is a "getter" that will retrieve the list price of the book
float Book::getPrice() {
              return price;
}

// this member function is a "getter" that will retrieve the total page numbers of the book
int Book::getPages() {
              return pages;
}

// this member function is a "getter" that will retrieve the ISBN number of the book
string Book::getISBN() {
              return isbn;
}



int main()
{

      cout << "Here are some of my favorite books ...\n" << endl;

     // Set up space to create 5 instances of the class Book to use with our constructor
      Book b1, b2, b3, b4, b5;

      // Use our constructor to create the first book, replace my book below with info on your favorite book, use b1
      b1.assign ("Old Man And The Sea", "Ernest Hemingway", 1952, 9.99, 152, "0684801221");

      cout << b1.getTitle() << " authored by " << b1.getAuthor() << " in the year " << b1.getCopyRightYear() << endl;
      cout << "The price of this book is:  $" << b1.getPrice() << endl;
      cout << "The page count of this book is: " << b1.getPages() << endl;
      cout << "The ISBN of this book is: " << b1.getISBN() << endl;
      cout << "\n" << endl;

      // Use the constructor again to create another book, again, replacing my book below with one your favorite books, use b2
      b2.assign ("The Perfect Storm", "Sebastian Junger", 1997, 9.99, 248, "0393337014");

      cout << b2.getTitle() << " authored by " << b2.getAuthor() << " in the year " << b2.getCopyRightYear() << endl;
      cout << "The price of this book is:  $" << b2.getPrice() << endl;
      cout << "The page count of this book is: " << b2.getPages() << endl;
      cout << "The ISBN of this book is: "  << b2.getISBN() << endl;
      cout << "\n" << endl;

     // use constructor (its called assign) again to create and then print information about book 3, another favorite book of yours ... remember to use b3 
      b3.assign ("The Hungry Ocean", "Linda Greenlaw", 1999, 9.99, 288, "0786885416");

      cout << b3.getTitle() << " authored by " << b3.getAuthor() << " in the year " << b3.getCopyRightYear() << endl;
       cout << "The price of this book is:  $" << b3.getPrice() << endl;
      cout << "The page count of this book is: " << b3.getPages() << endl;
      cout << "The ISBN of this book is: "  << b3.getISBN() << endl;
      cout << "\n" << endl;
      // use constructor again to create and then print information about book 4, your fourth favorite book ... remember to use b4
       b4.assign ("Eccentric Orbits", "John Bloom", 2016, 14.99, 560, "0802121683");

      cout << b4.getTitle() << " authored by " << b4.getAuthor() << " in the year " << b4.getCopyRightYear() << endl;
       cout << "The price of this book is:  $" << b4.getPrice() << endl;
      cout << "The page count of this book is: " << b4.getPages() << endl;
      cout << "The ISBN of this book is: "  << b4.getISBN() << endl;
      cout << "\n" << endl;

      // use constructor again to create and then print information about book 5, your fifth favorite book ... remember to use b5

      b5.assign ("Oceanography and Seamanship", "William G. Van Dorn", 974, 49.99, 440, "0870334344");

      cout << b5.getTitle() << " authored by " << b5.getAuthor() << " in the year " << b5.getCopyRightYear() << endl;
      cout << "The price of this book is:  $" << b5.getPrice() << endl;
      cout << "The page count of this book is: " << b5.getPages() << endl;
      cout << "The ISBN of this book is: "  << b5.getISBN() << endl;
      cout << "\n" << endl;
      return (0);
}
