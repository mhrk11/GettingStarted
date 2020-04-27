#include<iostream> 
#include<fstream> 
#include<conio.h> 

using namespace std;

class nameData
{
	int id;
	char name[20];
public:
	void getId()
	{
		cout<<"Enter id: ";
		cin>>id;
		cout<<"Enter Name: ";
		cin>>name;
	}
};


int main()
{
	char op;
	nameData n;
	ofstream file("data.dat");

	do
	{
		n.getId();
		file.write((char *)&n, sizeof(n));
		cout<<"Continue adding names (Y/y): ";
		cin>>op;


	}while(op=='Y'||op=='y');

	file.close();
	getch();
	

}
