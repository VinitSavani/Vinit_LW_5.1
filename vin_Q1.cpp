#include<iostream>
using namespace std;

class data
{
	public:
		int  a , b , c , d , e , ans ;
		
	
		
};

class math : public data
{
	public:
		
	void calculate(int a, int b)
	{
		cout << "Enter First number :- " ;
		cin >> a ;
		cout << "Enter Second number :- " ;
		cin >> b ;
		
		ans = a / b ;
		
		cout << "Division :- " << ans << endl << endl;
	}
	
	void calculate(int a, int b, int c)
	{
		cout << "Enter First number :- " ;
		cin >> a ;
		cout << "Enter Second number :- " ;
		cin >> b ;
		cout << "Enter Third number :- " ;
		cin >> c ;
		
		ans = a - b - c ;
		
		cout << "Subtraction :- " << ans << endl << endl;
	}
	
	void calculate(int a, int b, int c, int d)
	{
		cout << "Enter First number :- " ;
		cin >> a ;
		cout << "Enter Second number :- " ;
		cin >> b ;
		cout << "Enter Third number :- " ;
		cin >> c ;
		cout << "Enter Forth number :- " ;
		cin >> d ;
		
		ans = a * b * c * d;
		
		cout << "Multiplication :- " << ans << endl << endl;
	}
	
	void calculate(int a, int b, int c, int d, int e)
	{
		cout << "Enter First number :- " ;
		cin >> a ;
		cout << "Enter Second number :- " ;
		cin >> b ;
		cout << "Enter Third number :- " ;
		cin >> c ;
		cout << "Enter Forth number :- " ;
		cin >> d ;
		cout << "Enter Fifth number :- " ;
		cin >> e ;
		
		ans = a + b + c + d + e;
		
		cout << "Addition :- " << ans << endl << endl;
	}
};

int main()
{
	math A;
	
	A.calculate(100,2);
	A.calculate(90,8,20);
	A.calculate(2,3,5,7);
	A.calculate(10,2,55,20);
	
	
	return 0;
}
