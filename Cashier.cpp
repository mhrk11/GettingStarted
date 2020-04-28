//Cashier.

#include<iostream>
#include<conio.h>
#include<string>
#include <cstdlib>
#include<stdlib.h>



using namespace std;

class shoppingList
{
float price[10];
int quantity[10];
string name[10];
float sum[10];
char op;
protected:
	int i;
	int count;
	int cash;

public:
void getItemInfo()
{
	cout<<"Enter Product Details"<<endl;
	cout<<"-------------------------------------------------------------------------------------\n";
	i=0;
	count=0;



	do{
	cout<<"Enter Product Name: "; cin>>name[i];
	cout<<"price: "; cin>>price[i];
	cout<<"Quantity: "; cin>>quantity[i];
	cout<<endl;
	cout<<"Continue adding items: "; cin>>op;
	i+=1;
	count=count+1;


}while(op=='y'||op=='Y');

}
void printInfo()
{
	int sum=0;

	system("CLS");
	i=0;
	cout<<"Shopping List"<<endl;
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Item\t\tPrice\t\tQuantity\t\tSum\n";
	cout<<"-------------------------------------------------------------------------------------\n";
	do{
	cout<<name[i]<<"\t\t"<<price[i]<<"\t\t"<<quantity[i]<<"\t\t\t"<<quantity[i]*price[i]<<endl;
	sum=sum+quantity[i]*price[i];
	i=i+1;

} while(i<count);




cout<<"\n\nTotal: "<<sum<<endl;

cout<<"\n\nMake Payment (y/Y) or quit(N/n): ";
cin>>op;
if(op=='Y'|op=='y')
{
	while(true){
	cout<<"\n\nEnter Cash: "; cin>> cash;
	if(cash<sum)
	{
		cout<<"You paid "<<sum-cash<<" less\n";

	}
	else if(cash>sum)
	{
	    system("CLS");
		cout<<"Here is your return: "<<cash-sum<<endl;
		cout<<"Thanks for nothing\n\n";
		break;


	}
	else
	{
	    system("CLS");
		cout<<"Good Business...\n\n"<<endl;
		break;

	}
}
}
else
{
    system("CLS");
	cout<<"Well fuck off then: ";
}





}


};

int main()
{
shoppingList s1;
s1.getItemInfo();

s1.printInfo();




}
