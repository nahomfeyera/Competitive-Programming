#include<iostream>
#include<string.h>
#include<limits>

using namespace std;


   	int grades[60];
   	
   	int gradingStudents(int grades)
	{
			if(grades>=0 && grades<=100)
	{
		if(grades>=38)
		{
			
			if((grades + 1)%5 == 0)
			{
				grades = grades + 1;
			}
			
			if((grades + 2)%5 == 0)
			{
				grades = grades + 2;
			}
		}
	}
	else
	{
		cout<<"Please enter a number between 0 t0 100."<< endl;
	}
	
	return grades;
	
	}
	
	
	
		int main()
	{
		int n;
		
		//cout<<"Hello, how many students' grades would you like to enter?"<<endl;
		cin>>n;
		
			while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"\n\tInvalid Input. Please enter again."<<endl;
			cin>>n;
		}
		if(!cin.fail())
			break;
	}
		
		if(n>=1 && n<=60){
			
		for(int i = 0; i<n; i++)
		{
		
		//cout<<"Student "<<i+1<<"'s grade..."<<endl;
	
		cin>>grades[i];

	while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"\n\tInvalid Input. Please enter again."<<endl;
			cin>>grades[i];
		}
		if(!cin.fail())
			break;
	}
	
	}
	
}

			//cout<<"\n\tGrades:"<<endl;
			for(int i = 0; i<n; i++)
		{

				cout<<gradingStudents(grades[i])<<endl;

		}
	return 0;
	}


	
