#include<iostream>
using namespace std;
class Student{
private:
string name;
int  rollNo;
int marks;
public:
void accpetsDetail(){
	cout << "Enter name : ";
	cin>>name;
	cout << "Enter Roll Number : ";
	cin>>rollNo;
	cout << "Enter Marks: ";
	cin>>marks;
}
void displayDetail(){
	cout << "***Student Details***"<<endl;
	cout << "Name: " << name << endl;
	cout << "Roll No: "<< rollNo << endl;
	cout << " Marks: " << marks << endl;
}
};
int main(){
Student s;
s.accpetsDetail();
s.displayDetail();
}