#include <iostream>
using namespace std;
class Book{
    private:
    int BookID,pages,price;
    public:
    void setBookID(int b){
        BookID=b;
    }
    void setPages(int p){
        pages=p;
    }
    void setPrice(int pr){
        price=pr;
    }
    int getBookID(){
        return BookID;
    }
    int getPages(){
        return pages;
    }
    int getPrice(){
        return price;
    }
    void showBookDetails(){
        cout<<"The details of the books are: "<<endl<<"Book ID: "<<getBookID()<<endl<<"Pages: "<<getPages()<<endl<<"Price: "<<getPrice()<<endl;
    }
};

int main(){
Book*book1;
Book*book2;
book1= new Book;
book2= new Book;
book1->setBookID(12002);
book2->setBookID(12012);
book1->setPages(800);
book2->setPages(2000);
book1->setPrice(1000);
book2->setPrice(5000);

cout<<"costlier book details: "<<endl;

if(book1->getPrice()<book2->getPrice())
    book2->showBookDetails();
else
    book1->showBookDetails();
    return 0;
}
