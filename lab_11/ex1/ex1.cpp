// Перегрузка операторов класса Time

#include "time.h"
#include <iostream>

using namespace std;

int main()
{
	Time t1(1, 40, 12);
	Time t2(23, 20, 56);

    cout << "t1: " << t1 << "\nt2: " << t2 << '\n'; // 1:40:12
    cout << "t1 + t2: " << t1 + t2 << '\n'; // 23:20:56
    cout << "t2 - t1: " << t2 - t1 << '\n'; // 21:40:44
    cout << "t1 + 1.5: " << t1 + 1.5 << '\n'; // 3:10:12
    cout << "1.5 + t1: " << 1.5 + t1 << '\n'; // 3:10:12
    cout << "t1 > t2: " << (t1 > t2) << '\n'; // 0
    cout << "t1 < t2: " << (t1 < t2) << '\n'; // 1
    return 0;
}

