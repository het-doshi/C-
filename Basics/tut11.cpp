#include <iostream>
using namespace std;

int main()
{

   // structures
   /* structure: when we need to create such user defined data type in whcich it's entity is made up from
   diffrent data types */

   // here we intialize a structure student

   struct student
   {
      int EnNo;
      float cgpa;
      int sem;
   };

   // creating the data type of student structure
   struct student het;
   het.EnNo = 40;
   het.cgpa = 9.4;
   het.sem = 6;

   // printing the student sructure of het
   cout << "printing the student sructure of het" << endl;
   cout << "the value of het en no is " << het.EnNo << endl;
   cout << "the value of het cgpa is " << het.cgpa << endl;
   cout << "the value of het sem is " << het.sem << endl;
   cout << endl;

   // we can also create the structure with typedef with typedef we dont need to write struct name everywhere
   // creating the employe structure het1
   typedef struct employee
   {
      int Eid;
      float salary;
   } ep;

   // creating the data type of employee structure with typedef
   ep het1;
   het1.Eid = 1;
   het1.salary = 1200;

   // printing the employee sructure of het1
   cout << "printing the employee sructure of het1" << endl;
   cout << "the value of het en no is " << het1.Eid << endl;
   cout << "the value of het cgpa is " << het1.salary << endl;
   cout << endl;

   // Union
   // by creating the union we can only use the one field at a time because it is sharing of memory
   // creating the union

   union idno
   {
      int EnNo;
      int eid;
      int rollno;
   };

   // creating the union for h1
   union idno h1;
   h1.EnNo = 10;
   cout << "printing values of union h1" << endl;
   cout << "the vaue h1 EnNo is " << h1.EnNo << endl;
   cout << "the vaue h1 eid is " << h1.eid << endl;
   cout << endl;

   // now i wiil overwrite it by Eid 40
   cout << "the value of union h1 after overwrite by Eid 40 " << endl;
   h1.eid = 40;
   cout << "the vaue h1 EnNo is " << h1.EnNo << endl;
   cout << "the vaue h1 eid is " << h1.eid << endl;
   cout << endl;

   

   // Enums 
  // by creating the enum we can store the values in the number forms
  enum car {bmw,audi,honda};
  cout<<"printing the ENUM car"<<endl;
  cout<<"the value of bmw is "<<bmw<<endl;
  cout<<"the value of audi is "<<audi<<endl;
  cout<<"the value of honda is "<<honda<<endl;
   cout << endl;

  // we can also printing the enum by making variable
  cout<<"printing the enum by making variable"<<endl;
  car c1 = bmw;
  cout<<"the value of c1 is "<<c1;
}
