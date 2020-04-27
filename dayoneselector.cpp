#include<iostream>
#include<conio.h> 
#include<fstream> 

using namespace std;


class student
{
	int id;
	char name[20];
public: 
	void findingId();

};

void student::findingId()
{

	student s;
	ifstream file("data.dat");
	int idno, found=0;

	cout<<"Enter the search Id: "; cin>> idno;
	file.read((char*)&s, sizeof(s));


	while(!file.eof())
	{
		if(s.id==idno){
		
		found=1;
		// cout<<found;
		cout<<"id\tname\n";
		cout<<"----------------------------------------------";


		cout<<s.id<<" "<<s.name;

		break;


	}
	file.read((char *)&s, sizeof(s));

	

	}
	if (found==0) cout<<"Well, didn't find it. ";


}

int main()
{
	student s;
	s.findingId();
	getch();

}
