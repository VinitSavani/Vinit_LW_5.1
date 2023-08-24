#include<iostream>
using namespace std;

class cricket
{
	public:
		int num;
		void getTotalOvers()
		{
			cout << "Enter number of overs " ;
			cin >> num ;
		}
		
};

class t20Match : public cricket
{
	public:
		void getTotalOvers()
		{
			cout << "Total Number of overs in T20 are " << num << endl ;
		}
};

class testMatch : public cricket
{
		public:
		void getTotalOvers()
		{
			cout << "Total Number of overs in Test are " << num << endl ;
		}
};

int main()
{
	
	t20Match A;
	testMatch B;
	
	A.cricket::getTotalOvers();
	A.getTotalOvers();
	
	B.cricket::getTotalOvers();
	B.getTotalOvers();

	return 0;
}
