#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class book{
    private:
        char Book_Name[25],Author_Name[26];
        float price;
        int Page_Number,Book_ID;
    public:
        book()
        {
            price=0;
            Page_Number=0;
            Book_ID=0;
            strcpy(Book_Name,"NULL");
            strcpy(Author_Name,"NULL");
        }

        void getBookData()
        {
            cout<<"Enter name of the book: ";
            cin.getline(Book_Name,24);
            cout<<"Enter the Book ID: ";
            cin>>Book_ID;
            cin.ignore();
            cout<<"Enter the Author name: ";
            cin.getline(Author_Name,25);
            cout<<"Enter the price: ";
            cin>>price;
            cout<<"Enter total no. of pages: ";
            cin>>Page_Number;            
        }
        
        void showBookData()
        {
            cout<<"\n\nBook Id:"<<Book_ID;
            cout<<"\nName of the Book: "<<Book_Name;
            cout<<"\nAuthor name: "<<Author_Name;
            cout<<"\nPrice: "<<price;
            cout<<"\nNo. of Pages: "<<Page_Number;
        }
        int storeBook();
};

int book::storeBook()
{
    ofstream fout;
    fout.open("publisherHouse.txt",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}

int main()
{
    book b1,b2;
    b1.getBookData();
    b1.showBookData();
    b1.storeBook();
    b2.showBookData();
    return 0;
}