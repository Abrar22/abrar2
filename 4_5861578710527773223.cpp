#include<iostream>
#include<string>

using namespace std;
int main (void)
{
string student_name,student_id;
char debarment;
int result;
string division;
string cond ; 
do {
cout << "Student name ";
 cin >> student_name;
cout << "student id:";
cin>>student_id;
 cout << "Department: ";
 cin >> debarment;
 cout << "Result: ";
 cin >> result;
 
 char grade;
 // Using if\par
 if(debarment == 'A')
division = "Control";
 else if (debarment == 'T')
 division = "Telecommunication";
 else if (debarment == 'C')
 division = "Computer";
 else division = "Unknown";
 // Using switch\par
 switch(debarment)
{ case 'A':
 division = "Control";
 break;
 case 'T':
 division = "Telecommunication";
 case 'C':
 division = "Computer";
 break;
default: division ="Unknown";
}
 if(result >= 90 && result <= 100) grade = 'A';
 else if(result >= 80 && result< 90) grade = 'B';
 else if(result >= 70 && result < 80) grade = 'C';
 else if(result >= 60 && result < 70) grade = 'D';
 else grade = 'F';
 
 cout<<endl << "Name: " << student_name << endl;
cout << "ID: " << student_id << endl;
 cout << "grade: " <<grade<<endl;
 cout << "debarment: " <<division<<endl;
 

 cout<<endl<<"Do You want Contniou ?  Y/EXET   ";
 cin>>cond;

}while (cond !="EXET");
 return 0;
 }
 
 
