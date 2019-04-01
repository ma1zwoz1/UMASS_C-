#include <iostream>
#include <string>
 
using namespace std;
 
// Created by Zach Wozich 4-23-2018
// class Books
// with twelve private data fields: title, author, publisher, copyRight, pages, isdn, fiction nonfiction,
// genre, weight, eye_color, hair_color, class
// four public methods to retrieve fields (called "getters")
// and one public non-default constructor
 
class Books {
 
  public:
 
      // member function prototypes
      void assign (string, string, string, string, string, string, string, string, string);   // this is your constructor
      string getTitle();
      string getAuthor();
      string getPublisher();
	  string getCopyRight();
	  string getPages();
	  string getIsdn();
	  string getFictionNonfiction();
	  string getGenre();
	  string getPrice();
 
 
  private:
 
      // data members
      string title;
      string author;
      string publisher;
	  string copyRight;
	  string pages;
	  string isdn;
	  string fictionNonfiction;
	  string genre;
	  string price;

};
 
 
// these are the actual member functions
 
// this member function is a "constructor" that will create a new books
void Books::assign (string booksTitle, string booksAuthor, string booksPublisher, string booksCopyRight, string booksPages, string booksIsdn, string booksFictionNonfiction,
string booksGenre, string booksPrice) {
            title = booksTitle;
            author = booksAuthor;
			publisher = booksPublisher;
           copyRight = booksCopyRight;
            pages = booksPages;  
            isdn = booksIsdn;
            fictionNonfiction = booksFictionNonfiction;
			genre = booksGenre;
			price = booksPrice;
}
 
// this member function is a "getter" that will retrieve that title value
string Books::getTitle() {
            return title;
}
 
// this member function is a "getter" that will retrieve the title author value
string Books::getAuthor() {
            return author;
}
 
// this member function is a "getter" that will retrieve that books number value
string Books::getPublisher() {
            return publisher;
}
 
// this member function is a "getter" that will retrieve that books issue date value
string Books::getCopyRight() {
              return copyRight;
}
 
// this member function is a "getter" that will retrieve that books birth date value
string Books::getPages() {
              return pages;
}
 
// this member function is a "getter" that will retrieve that title isdn value
string Books::getIsdn() {
              return isdn;
}
 
// this member function is a "getter" that will retrieve that title expiration value
string Books::getFictionNonfiction() {
              return fictionNonfiction;
}
 
 // this member function is a "getter" that will retrieve that title genre value
string Books::getGenre() {
              return genre;
}

 // this member function is a "getter" that will retrieve that title price value
string Books::getPrice() {
              return price;
}

 
int main()
{
 
      cout << "NY Times Best Seller Books\n" << endl;
 
     // Set up space to create 5 instances of the class books to use with our constructor
      Books b1, b2, b3, b4, b5;
 
      // Use our constructor to create the first books, use b1
      b1.assign ("A Higher Loyalty", "J.Comey", "Flatiron", "2018", "312", "1250192455", "Non-Fiction", "Political Drama", "$17.99");
 
 cout  << "Name: " << b1.getTitle() << endl;
 cout << "Author: " << b1.getAuthor() << endl;
 cout << "Publisher: " << b1.getPublisher() << endl;
 cout << "Copy Right: " << b1.getCopyRight() << endl;
 cout << "Total Pages: " << b1.getPages() << endl;
 cout << "Isdn: " << b1.getIsdn() << endl;
 cout << "Fiction or Non-Fiction: " << b1.getFictionNonfiction() << endl;
 cout << "Genre: " << b1.getGenre() << endl;
 cout << "Price: " << b1.getPrice() << endl;
 cout << "\n" << endl;
 
      // Use our constructor to create the first books, use b2
      b2.assign ("Fascism: A Warning", "M.Albright-B.Woodward", "Harper", "2018", "304", "62802186", "Non-Fiction", "Political Drama", "$16.79");
 
 cout  << "Name: " << b2.getTitle() << endl;
 cout << "Author: " << b2.getAuthor() << endl;
 cout << "Publisher: " << b2.getPublisher() << endl;
 cout << "Copy Right: " << b2.getCopyRight() << endl;
 cout << "Total Pages: " << b2.getPages() << endl;
 cout << "Isdn: " << b2.getIsdn() << endl;
 cout << "Fiction or Non-Fiction: " << b2.getFictionNonfiction() << endl;
 cout << "Genre: " << b2.getGenre() << endl;
 cout << "Price: " << b2.getPrice() << endl;
 cout << "\n" << endl;
 
     // Use our constructor to create the first books, use b3 
      b3.assign  ("Fire and Fury", "M.Wolff", "Holt", "2018", "321", "1250158060", "Non-Fiction", "Political Drama", "$16.05");
 
 cout  << "Name: " << b3.getTitle() << endl;
 cout << "Author: " << b3.getAuthor() << endl;
 cout << "Publisher: " << b3.getPublisher() << endl;
 cout << "Copy Right: " << b3.getCopyRight() << endl;
 cout << "Total Pages: " << b3.getPages() << endl;
 cout << "Isdn: " << b3.getIsdn() << endl;
 cout << "Fiction or Non-Fiction: " << b3.getFictionNonfiction() << endl;
 cout << "Genre: " << b3.getGenre() << endl;
 cout << "Price: " << b3.getPrice() << endl;
 cout << "\n" << endl;
 
      // Use our constructor to create the first books, use b4
       b4.assign  ("I'll Be Gone in the Dark", "M.McNamara", "Harper", "2018", "352", "62319787", "Non-Fiction", "Crime Drama","$17.05");
 
 cout  << "Name: " << b4.getTitle() << endl;
 cout << "Author: " << b4.getAuthor() << endl;
 cout << "Publisher: " << b4.getPublisher() << endl;
 cout << "Copy Right: " << b4.getCopyRight() << endl;
 cout << "Total Pages: " << b4.getPages() << endl;
 cout << "Isdn: " << b4.getIsdn() << endl;
 cout << "Fiction or Non-Fiction: " << b4.getFictionNonfiction() << endl;
 cout << "Genre: " << b4.getGenre() << endl;
 cout << "Price: " << b4.getPrice() << endl;
 cout << "\n" << endl;
 
      // Use our constructor to create the first books, use b5
 
      b5.assign  ("Killers of the Flower Moon", "D.Grann", "Doubleday", "2018", "400", "307742482", "Non-Fiction", "Crime Drama","$10.17");
	  
 cout  << "Name: " << b5.getTitle() << endl;
 cout << "Author: " << b5.getAuthor() << endl;
 cout << "Publisher: " << b5.getPublisher() << endl;
 cout << "Copy Right: " << b5.getCopyRight() << endl;
 cout << "Total Pages: " << b5.getPages() << endl;
 cout << "Isdn: " << b5.getIsdn() << endl;
 cout << "Fiction or Non-Fiction: " << b5.getFictionNonfiction() << endl;
 cout << "Genre: " << b5.getGenre() << endl;
 cout << "Price: " << b5.getPrice() << endl;
 cout << "\n" << endl;
      return (0);
}
