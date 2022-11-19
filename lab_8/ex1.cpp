// Класс Time

#include <iostream>
#include "time.h"
using namespace std;

int main()
{
	Time t1(1, 40, 12);
	Time t2(23, 20, 56); 
	Time t3; 

	t3 = t1.addTime(t2);

	t1.getTime(); // 1:40:12
	t2.getTime(); // 23:20:56
	t3.getTime();  // 1:1:8
	return 0;
}

