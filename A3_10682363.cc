#include<iostream>
using namespace std;
int main()
    {
    	// Variable declaration Block-------------
    	int score; 
    	//-------------<<         >>-------------
        cout<<"----WELCOME TO THE ADVANCED GRADING SYSTEM----"<<endl;
    	cout<<"PEASE INPUT YOUR SCORE:";
    	cin>>score;
    	//----Program Structure Using If else Statements----
 if (score >= 90)
     cout << "Your Grade is A---EXCELLENT." << endl;
         else 
if (score >= 80)
    cout << "Your Grade is B---VERY GOOD." << endl;
         else
 if (score >= 70)
    cout << "Your Grade is C---GOOD." << endl;
         else
 if (score >= 60)
cout << "Your Grade is D---PASS." << endl;
         else
  if (score >= 50)
cout << "Grade is E---CREDIT." << endl;
          else
cout << "Your Grade is F---FAIL!." << endl;
	return 0;}
