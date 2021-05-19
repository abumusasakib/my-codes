#include <bits/stdc++.h>

using namespace std;

class Book
{
    string bookName;
    float price;
    int noOfAuthors;
    string* authorNames;
public:
	Book()
	{
		bookName = "TBA";
		price = 0.0;
		noOfAuthors = 0;
		authorNames = nullptr;
	}
    void setBook()
    {
        cin.ignore();
        cout << "Enter book name: ";
        getline(cin, bookName);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter number of authors: ";
        cin >> noOfAuthors;

        authorNames = new string[noOfAuthors];
        cin.ignore();

        for(int i = 0; i < noOfAuthors; i++)
        {
            cout << "Enter authors' names: ";
            getline(cin, authorNames[i]);
        }
    }

    void getBook()
    {
        cout << "Book name: " << bookName << endl;
        cout << "Price: " << price << endl;
        cout << "Number of authors: " << noOfAuthors << endl;

        if(authorNames != nullptr && noOfAuthors != 0)
        {
            cout << "Name of the authors: " << endl;
            for(int i = 0; i < noOfAuthors; i++)
            {
                cout << authorNames[i] << endl;
            }
        }
    }
// AND/OR declare friends, so that the given main() works
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
    Course& setCourseInfo()
    {
        cout << "Enter course ID: ";
        cin >> courseId;

        cin.ignore();
        cout << "Enter course title: ";
        getline(cin, courseTitle);

        cout << "Enter number of credits: ";
        cin >> noOfCredits;

        textBook.setBook();
        return *this;
    }

    void showCourseInfo()
    {
        cout << "Course ID: " << courseId << endl;
        cout << "Course title: " << courseTitle << endl;
        cout << "Number of credits: " << noOfCredits << endl;

        textBook.getBook();
    }

    int getNoOfCredits()
    {
        return noOfCredits;
    }
// AND/OR declare friends, so that the given main() works
};
float getBillAmount(Course* eC, int n, int rPC, int sP)
{
    int totalCredits = 0;
    float totalAmount, discountedAmount, remainingAmount, scholarship;
    if(eC != nullptr && n != 0)
    {
        for(int i = 0; i < n; i++)
        {
            totalCredits += eC[i].getNoOfCredits();
        }

        totalAmount = totalCredits * rPC;
        scholarship = (float) sP / 100;
        discountedAmount = totalAmount * scholarship;

        remainingAmount = totalAmount - discountedAmount;
    }

    return remainingAmount;
}
int main()
{
    Course *enrolledCourses;
    int n, i, ratePerCredit, scholarshipPercent;
    cout << "How many courses to enroll? ";
    cin >> n;
    cout << "Rate per credit for this student? ";
    cin >> ratePerCredit;
    cout << "Scholarship (%) for this student? ";
    cin >> scholarshipPercent;
    enrolledCourses = new Course[n];
    for(i = 0;i < n ;i++)
        enrolledCourses[i].setCourseInfo().showCourseInfo();
    cout << "Total amount to be paid is:" << getBillAmount(enrolledCourses, n, ratePerCredit, scholarshipPercent) << endl;

    return 0;
}
