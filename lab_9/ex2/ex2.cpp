// Безопасная реализация класса Time

#include <iostream>
#include "time.h"
using namespace std;

int main()
{
	try
	{
		Time t1 = Time();
		Time t2 = Time(23, 20, 70); // Error in constructor: seconds cannot be greater than or equal to 60
		Time t3;

		t3 = t1.add_time(t2);
		t3.get_time();
	}
	catch (Time::ExTime& ex)
	{
		cout << "\nError " << ex.origin << ": " << ex.description;
	}
    
    return 0;
}

