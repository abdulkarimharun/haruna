#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
         {
		 ofstream out_data("filename.txt");
		 int i, age,score; char gender, grade; string name; string id;
		 for(i=1;i<=5;i++){
		  cout<<"ENTER YOUR ID:"; cin>>id;
		  cout<<"ENTER YOUR NAME:";cin>>name;
		  cout<<"ENTER YOUR AGE:";cin>>age;
		  cout<<"ENTER YOUR GENDER:";cin>>gender;
		  cout<<"ENTER YOUR SCORE:";cin>>score;
		  cout<<endl<<endl<<endl;
		  if (score >= 90)
		  grade='A';
         else 
       if (score >= 80)
    grade='B';
         else
      if (score >= 70)
     grade='C';
         else
     if (score >= 60)
  grade='D';
         else
    if (score >= 50)
 grade='E';
          else
  grade='F';
		
		
out_data<<"ID         "<<"NAME  "<<"AGE  "<<"GENDER  "<<"SCORE  "<<"GRADE  "<<endl;
out_data<<"*****************************************************"<<endl;
out_data<<id<<"  ";  
out_data<<name<<"  ";
out_data<<age<<"      ";
out_data<<gender<<"     ";
out_data<<score<<"       ";
out_data<<grade<<"  "<<endl;
out_data<<"*****************************************************"<<endl;
		 
		 	 }

         	return 0;
		}
