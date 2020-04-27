#include<iostream> 
#include<fstream> 
#include<conio.h> 
using namespace std;

class student
{
	int id;
	char name[20];
public: 
	void getId()
	{
		cout<<id<<"\t"<<name<<endl;

	}
};
int main()
{
	student s;
	ifstream file("data.dat");
	file.read((char *)&s, sizeof(s));

	cout<<"id\t"<<"name\n";
	cout<<"--------------------------------------------------------------------------------------------\n";

	while(!file.eof())
	{
		s.getId();
		file.read((char *)&s, sizeof(s));

	}

	file.close();

	getch();


}