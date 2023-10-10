#include <iostream>
using namespace std;
struct student

{
int id, semester, credit;
    float cgpa;
};
int main()
{
    student st[10];


    st[1].id = 22-76123-9;
    st[1].semester = 11;
    st[1].credit= 117;
    st[1].cgpa = 3.95;


    cout<<st[1].id<<" "<<endl;
    cout<<st[1].semester<<" "<<endl;
    cout<<st[1].credit<<" "<<endl;
    cout<<st[1].cgpa<<" "<<endl;


    st[2].id = 43-54556-2;
    st[2].semester = 8;
    st[2].credit = 75;
    st[2].cgpa = 3.70;


    cout<<st[2].id<<" "<<endl;
    cout<<st[2].semester<<" "<<endl;
    cout<<st[2].credit<<" "<<endl;
    cout<<st[2].cgpa<<" "<<endl;


    st[3].id = 22-87130-1;
    st[3].semester = 12;
    st[3].credit = 140;
    st[3].cgpa = 3.40;


    cout<<st[3].id<<" "<<endl;
    cout<<st[3].semester<<" "<<endl;
    cout<<st[3].credit<<" "<<endl;
    cout<<st[3].cgpa<<" "<<endl;


    st[4].id = 40-21710-2;
    st[4].semester = 6;
    st[4].credit = 48;
    st[4].cgpa = 3.45;



    cout<<st[4].id<<" "<<endl;
    cout<<st[4].semester<<" "<<endl;
    cout<<st[4].credit<<" "<<endl;
    cout<<st[4].cgpa<<" "<<endl;



    st[5].id =3-05165-0;
    st[5].semester = 7;
    st[5].credit = 65;
    st[5].cgpa = 2.77;

    cout<<st[5].id<<" "<<endl;
    cout<<st[5].semester<<" "<<endl;
    cout<<st[5].credit<<" "<<endl;
    cout<<st[5].cgpa<<" "<<endl;


    st[6].id = 41-75928-2;
    st[6].semester = 5;
    st[6].credit = 86;
    st[6].cgpa = 3.87;


    cout<<st[6].id<<" "<<endl;
    cout<<st[6].semester<<" "<<endl;
    cout<<st[6].credit<<" "<<endl;
    cout<<st[6].cgpa<<" "<<endl;


    st[7].id = 22-02121-2;
    st[7].semester = 3;
    st[7].credit = 43;
    st[7].cgpa = 3.61;


    cout<<st[7].id<<" "<<endl;
    cout<<st[7].semester<<" "<<endl;
    cout<<st[7].credit<<" "<<endl;
    cout<<st[7].cgpa<<" "<<endl;


    st[8].id = 33-65201-2;
    st[8].semester = 11;
    st[8].credit = 134;
    st[8].cgpa = 3.83;


    cout<<st[8].id<<" "<<endl;
    cout<<st[8].semester<<" "<<endl;
    cout<<st[8].credit<<" "<<endl;
    cout<<st[8].cgpa<<" "<<endl;


    st[9].id = 22-47132-2;
    st[9].semester = 7;
    st[9].credit = 53;
    st[9].cgpa = 2.69;


    cout<<st[9].id<<" "<<endl;
    cout<<st[9].semester<<" "<<endl;
    cout<<st[9].credit<<" "<<endl;
    cout<<st[9].cgpa<<" "<<endl;


    st[10].id = 22-64545-2;
    st[10].semester = 10;
    st[10].credit = 100;
    st[10].cgpa = 3.80;


    cout<<st[10].id<<" "<<endl;
    cout<<st[10].semester<<" "<<endl;
    cout<<st[10].credit<<" "<<endl;
    cout<<st[10].cgpa<<" "<<endl;


    cout << "\nScholarship Students (CGPA >= 3.75):" << endl;
    for (int i = 1; i < 11; i++)
    {
        if (st[i].cgpa >= 3.75)
        {
            cout << "Student ID: " << st[i].id << endl;
        }
    }


    cout << "\nStudents with more than 50 credit:" << endl;
    for (int i = 1; i < 11; i++)
    {
        if (st[i].credit > 50)
        {
            cout << "Student ID: " << st[i].id << endl;
        }
    }


    cout << "\nStudents with at least 2 semesters and 28 credit:" << endl;
    for (int i = 1; i < 11; i++)
    {
        if (st[i].semester >= 2 && st[i].credit >= 28)
        {
            cout << "Student ID: " << st[i].id << endl;
        }
    }


    return 0;
}


