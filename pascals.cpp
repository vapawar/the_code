#include <iostream>
using namespace std;

int main()
{

	int max;
	cout << "How big do you like it?\n";
	cin >> max;
	if(max<0||max>30)
	return 0;

	for(int row=0; row<=max; row++)
	{
		cout << 1 << " ";
		unsigned int out=1;
		unsigned int last;
		unsigned int next=row;
		
		for(int i=1; i<=row; i++)
		{
			last=out;
			out=last*next/i;
			next--;
			cout << out << " ";
		}
		cout << endl;
	}
	return 0;
}