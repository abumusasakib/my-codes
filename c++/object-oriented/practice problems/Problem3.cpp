#include <iostream>

using namespace std;

class Author
{
    int ID;
    string name, email;
public:
    Author()
    {
        ID = 0;
        name = email = "TBA";
    }

    void setAuthorInfo()
    {
        cout << "Enter author ID: ";
        cin >> ID;
        cin.ignore();
        cout << "Enter author name: ";
        getline(cin, name);
        cout << "Enter author email: ";
        cin >> email;

    }

    void showAuthorInfo()
    {
        cout << "ID: " << ID << endl;
        cout << "Author name: " << name << endl;
        cout << "Author email: " << email << endl;

    }

    string getAuthorName()
    {
        return name;
    }
};
class Book
{
    string title, ISBN_No;
    float price;
    int noOfAuthor;
    Author *ptr;
public:
    Book()
    {
        title = ISBN_No = "TBA";
        price = 0.0;
        noOfAuthor = 0;
        ptr = nullptr;
    }
    Book(string bookTitle, string bookISBNNo, float bookPrice)
    {
        title = bookTitle;
        ISBN_No = bookISBNNo;
        price = bookPrice;

        cout << "Enter number of authors: ";
        cin >> noOfAuthor;

        ptr = new Author[noOfAuthor];

        for(int i = 0; i < noOfAuthor; i++)
        {
            ptr[i].setAuthorInfo();
        }

    }

    string getTitle()
    {
        return title;
    }

    bool operator<=(int bookPrice)
    {
        if(price <= bookPrice)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    bool operator==(string authorName)
    {
        for(int i = 0; i < noOfAuthor; i++)
        {
            if(ptr[i].getAuthorName() == authorName)
            {
                return true;
            }

        }

        return false;
    }

    friend void operator>>(istream& in, Book& b);
    friend ostream& operator<<(ostream& out, Book b);

// AND/OR declare friends, so that the given main() works
};

void operator>>(istream& in, Book& b)
{
    in.ignore();
    cout << "Enter title: ";
    getline(in, b.title);
    cout << "Enter ISBN Number: ";
    getline(in, b.ISBN_No);
    cout << "Enter price: ";
    cin >> b.price;

    cout << "Enter number of authors: ";
    cin >> b.noOfAuthor;

    b.ptr = new Author[b.noOfAuthor];

    for(int i = 0; i < b.noOfAuthor; i++)
    {
        b.ptr[i].setAuthorInfo();
    }
}

ostream& operator<<(ostream& out, Book b)
{
    out << "Title: "<< b.title << endl;
    out << "ISBN Number: "<< b.ISBN_No << endl;
    out << "Price: "<< b.price << endl;
    out << "Number of authors: "<< b.noOfAuthor << endl;

    for(int i = 0 ; i < b.noOfAuthor; i++)
    {
        b.ptr[i].showAuthorInfo();
    }

    return out;
}

int main()
{
    Book b1, b2("Data Structures", "978-0-7334-2609-4", 550);
//parameterized constructor also ask for no of authors and their details
    cout << "Give input for book 1: " << endl;
    cin >> b1;
//Should ask title, ISBN_No, price.
//Then ask #ofAuthors & author info (id, name and email) for all authors.
    cout << "Complete information of the books are: " << endl;
    cout<< b1 << b2 << endl;
    cout<<"For The book titled: "<< b1.getTitle() <<endl;
    if(b1 <= 1000 || b1 == "Ataul Karim")
        cout<<"Ataul Karim is an author, or the price is <= 1000"<<endl;
    else
        cout<<"Ataul Karim is NOT an author & price is > 1000"<<endl;
    return 0;
}
