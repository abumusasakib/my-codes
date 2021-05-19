#include<iostream>
using namespace std;

class Author
{
private:
    int ID;
    string name,email;
public:
    Author()
    {
        ID=1;
        name=email="TBA";
    }
    void setAuthor()
    {
        cout<<"Enter Author ID:";
        cin>>ID;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter email address:";
        cin>>email;
    }
    void showAuthor()
    {
        cout<<"Author ID:"<<ID<<" Name:"<<name<<" Email:"<<email<<endl;
    }
    string getName()
    {
        return name;
    }
};
class Book
{
private:
    string title,ISBN_No;
    float price;
    int noOfAuthor;
    Author *ptr;
public:
    Book()
    {
        title = "English";
        ISBN_No = "978-0-8575-2609-4";
        price = 100;
    }
    Book(string title,string ISBN_No,float price)
    {
        this->title = title;
        this->ISBN_No=ISBN_No;
        this->price=price;

        cout<<"Enter number of Author:";
        cin>>noOfAuthor;
        ptr = new Author[noOfAuthor];
        for(int i=0; i<noOfAuthor; i++)
        {
            ptr[i].setAuthor();
        }
    }
    void showBookInfo()
    {
        cout<<"Book Title:"<<title<<" ISBN_No:"<<ISBN_No<<" Price:"<<price<<endl;
        noOfAuthor=2;
        ptr = new Author[noOfAuthor];
        for(int i=0; i<noOfAuthor; i++)
        {
            ptr[i].showAuthor();
        }
    }
    string getTitle()
    {
        return title;
    }
    float getPrice()
    {
        return price;
    }

    /*bool operator<=(float price)
    {
        if(ptr.getPrice <= price)
            return true;
        else
            return false;
    }
    bool operator==(string name)
      {
          if(ptr.getName==name)
            return true;
          else
            return false;
      }*/

    friend void operator>>(istream &sin,Book &b);
    friend ostream& operator<<(ostream &sin,Book b);
};

void operator>>(istream &sin,Book &b)
{
    cout<<"Enter Book title:";
    sin>>b.title;
    cout<<"Enter ISBN_No:";
    sin>>b.ISBN_No;
    cout<<"Enter price:";
    sin>>b.price;

    //int noOfAuthor;
    cout<<"Enter number of Author:";
    sin>>b.noOfAuthor;
    b.ptr = new Author[b.noOfAuthor];
    for(int i=0; i<b.noOfAuthor; i++)
    {
        b.ptr[i].setAuthor();
    }
}
ostream& operator<<(ostream &sout,Book b)
{
    sout<<"Book Title:"<<b.title<<"ISBN No:"<<b.ISBN_No<<" Price:"<<b.price<<endl;

    for(int i=0;i<b.noOfAuthor;i++)
    {
      b.ptr[i].showAuthor();
    }
    return sout;
}
int main()
{
    Book b1;
    //b1.showBookInfo();
    Book b2("Data Structures", "978-0-7334-2609-4", 550);
    //parameterized constructor also ask for no of authors and their details ???
    //b2.showBookInfo();

    cout << "Give input for book 1:" << endl;
    cin >> b1;
    //Should ask title, ISBN_No, price.
    //Then ask #ofAuthors & author info (id, name and email) for all authors. ???

    cout << "Complete information of the books are: "<< endl;
    cout<< b1 << b2 << endl;
    cout<<"For The book titled:"<< b1.getTitle() <<endl;

    /*if(b1 <= 1000 || b1 == "Ataul Karim")
    cout<<"Ataul Karim is an author, or the price is <= 1000"<<endl;
    else
    cout<<"Ataul Karim is NOT an author & price is > 1000"<<endl;*/
    return 0;
}
