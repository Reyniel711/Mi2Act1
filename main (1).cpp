#include <iostream>
using namespace std;

int main()
{
    int number;
    
        cout << "Input any positive integers: ";
        cin >> number;
        
        while (number != 1)
	{
		if (number & 1) 
		{
			number = 3 * number + 1;
		}
		else 
		{
		    number = number/2;
		}
		cout << "current given Value is " << number << endl;
	}
	
	return 0;
}
