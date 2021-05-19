#include <iostream>

using namespace std;

class Author
{
    string authorName, authorEmail;
public:
	Author()
	{
		authorName = authorEmail = "TBA";
	}
    void setAuthor()
    {
        cin.ignore();
        cout << "Enter name of author: ";
        getline(cin, authorName);
        cout << "Enter email of author: ";
        cin >> authorEmail;
    }

    void showAuthor()
    {
        cout << "Name of author: " << authorName << endl;
        cout << "Email of author: " << authorEmail << endl;
    }
};
class Book
{
    string bookName, isbn;
    float price;
    int noOfAuthors;
    Author* authorList;
public:
	Book()
	{
		bookName = isbn = "TBA";
		price = 0.0;
		noOfAuthors = 0;
		authorList = nullptr;
	}
    void setBook()
    {
        cout << "Enter name of book: ";
        getline(cin, bookName);
        cout << "Enter ISBN number: ";
        cin >> isbn;
        cout << "Enter number of authors: ";
        cin >> noOfAuthors;

        authorList = new Author[noOfAuthors];

        for(int i = 0 ; i < noOfAuthors; i++)
        {
            authorList[i].setAuthor();
        }
    }

    void getBook()
    {
        cout << "Name of book: " << bookName << endl;
        cout << "ISBN Number: " << isbn << endl;
        cout << "Number of authors: " << noOfAuthors << endl;

        for(int i = 0; i < noOfAuthors; i++)
        {
            authorList[i].showAuthor();
        }
    }
};
class Course
{
    string courseId, courseTitle;
    int noOfCredits;
    Book textBook;
public:
	Course()
	{
		courseId = courseTitle = "TBA";
		noOfCredits = 0;
	}
    Course& populateCourse()
    {
        cout << "Enter course ID: ";
        cin >> courseId;
        cin.ignore();
        cout << "Enter course title: ";
        getline(cin, courseTitle);
        cout << "Enter number of credits: ";
        cin >> noOfCredits;
        cin.ignore();
        textBook.setBook();

        return *this;
    }

    void displayCourse()
    {
        cout << "Course ID: " << courseId << endl;
        cout << "Course Title: " << courseTitle << endl;
        cout << "Number of credits: " << noOfCredits << endl;

        textBook.getBook();
    }

    int getNumOfCredits()
    {
        return noOfCredits;
    }
};

void allocateMemory(Course*& c, int n)
{
    c = new Course[n];
}

void operator+=(int& credits, Course courseObj)
{
    credits += courseObj.getNumOfCredits();
}

int main()
{
    Course *courseArr;
    int n, i;
    cout<<"How many courses? ";
    cin>>n;
    allocateMemory(courseArr, n); //it is a global function
    for(i=0; i<n; i++)
        courseArr[i].populateCourse().displayCourse();
    int totalCredits = 0;
    for(i=0; i<n; i++)
        totalCredits += courseArr[i];
    cout << "Total no of credits of these courses is: " << totalCredits <<endl;
    return 0;
}
