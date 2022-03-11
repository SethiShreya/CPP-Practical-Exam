#include<bits/stdc++.h>

using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

void enter(){
    int no;
    cout<<"How many students data you want to enter: ";
    cin>>no;    
    ofstream f1("data.txt");
    for (int i = 0; i < no; i++)
    {
        Student obj;
        cout<<"Enter the data for student "<<i+1<<" : "<<endl;
        cout << "Roll No     : ";
        cin >> obj.RollNo;
        f1 << "Roll No     : " << obj.RollNo << endl;

        cout << "Name        : ";
        cin.ignore();
        getline(cin, obj.Name);
        f1 << "Name        :" << obj.Name << endl;

        cout << "Class       : ";
        cin >> obj.Class;
        f1 << "Class       : " << obj.Class << endl;

        cout << "Year        : ";
        cin >> obj.Year;
        f1 << "Year        : " << obj.Year << endl;

        cout << "Total Marks : ";
        cin >> obj.TotalMarks;
        cout << endl
             << endl;

        f1 << "Total Marks : " << obj.TotalMarks << endl
           << endl;
    }
    f1.close();
}

void retrieve(){
    ifstream f2;
    f2.open("Output.txt");
    while (f2.good())
    {
        string str;
        getline(f2, str);
        cout << str << endl;
    }
    f2.close();
}

int main()
{
    int choice;
    while (1)
    {
        system("cls");
        cout << "Enter 1 to add students data\n";
        cout << "Enter 2 to get display data  \n";
        cout << "Enter any other value to exit. \n";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            enter();
            break;
        }
        case 2:
            retrieve();
            break;
        default:
            return 0;
        }
    }
    return 0;
}