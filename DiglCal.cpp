#include<iostream>
#include<math.h>
#define PI 3.1415
using namespace std;
void cal();

void add()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nAddition = "<<a+b<<endl;
}

void sub()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nSubtraction = "<<a-b<<endl;
}

void multi()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nMultiplication = "<<a*b<<endl;
}

void div()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	if(b!=0)
	{
	cout<<"\nDivison = "<<a/b<<endl;
	}
	else
	cout<<"\nInvalid value";
}
void mod()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	if(b!=0)
	{
	cout<<"\nMod = "<<a%b<<endl;
	}
	else
	cout<<"\n Invalid value";
}
void increment()
{
    int a;
	cout<<"enter a number : ";
	cin>>a;
	a++;
	cout<<"\n increment="<<a ;	
}
void decrement()
{
	int a;
	cout<<"enter a number : ";
	cin>>a;
	a--;
	cout<<"decrement="<<a;
}

void arithmetic()
{
	int ch;
	while(1)
	{
		cout<<"\n1.Addition";
		cout<<"\n2.Subtraction";
		cout<<"\n3.Multiplication";
		cout<<"\n4.Division";
		cout<<"\n5.Modulo Operation(Remainder after division)";
		cout<<"\n6.Increment operation";
		cout<<"\n7.Decrement operator";
		cout<<"\n8.Back to home page";
		
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				multi();
				break;
			case 4:
				div();
				break;	
			case 5:
				mod();
				break;
			case 6:
				increment();
				break;
			case 7:
				decrement();
				break;
			case 8:
				cal();
				break;
			default:
				cout<<"\nInvalid Choice! Please Enter a Valid Choice.\n";
		}
	}
}
void square()
{
	int a,s;
	cout<<"\nEnter a number";
	cin>>a;
	s=a*a;
	cout<<"Square of number="<<s<<endl;
}
void sqroot()
{
	double a,s;
	cout<<"\nEnter a number";
	cin>>a;
	s=sqrt(a);
	cout<<"\nSquare root of number="<<s<<endl;
}
void expo()
{
	double a,s;
	cout<<"\nEnter a number";
	cin>>a;
	s=exp(a);
	cout<<"\nSquare root of number="<<s<<endl;
}
void trigo()
{
	double deg,rad;
	double sineValue,cosValue,tanValue;
	cout<<"\nenter an angle in degree";
	cin>>deg;
	rad=deg*(PI/180.0);
	sineValue=sin(rad);
	cosValue=cos(rad);
	tanValue=tan(rad);
	cout<<"\nValue of sine"<<deg<<"="<<sineValue<<endl;
	cout<<"\nValue of cos"<<deg<<"="<<cosValue<<endl;
	cout<<"\nValue of tan"<<deg<<"="<<tanValue<<endl;
}

void AdvFunction()
{
	int ch;
	while(1)
	{
		cout<<"\n1.Sqroot";
		cout<<"\n2.Exponential";
		cout<<"\n3.Trigonometrical expression";
		cout<<"\n4.Square";
		cout<<"\n5.back to home page";
		cout<<"\nEnter your choice";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				sqroot();
				break;
			case 2:
				expo();
				break;
			case 3:
				trigo();
				break;
			case 4:
				square();
				break;
			case 5:
				cal();
				break;
			default:
				cout<<"\n Invalid choice,Please enter valid option";
		}
	}
}

void cal()
{
	int ch;
	cout<<"\n1.Arithematic operation";
	cout<<"\n2.Advance function";
	cout<<"\n3.Exit\n";
	cout<<"\nEnter your choice	";
	cin>>ch;
	switch(ch)
	{
		case 1:
			arithmetic();
			break;
		case 2:
			AdvFunction();
			break;
		case 3:
			exit(1);
			break;
		default:
			cout<<"\n invalid choice";
	}
}
int main()
{
	cal();
	return 0;
}
