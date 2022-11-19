// Передача параметров в программу

#include <iostream>
#include <string>
using namespace std;

void add(int a, int b) {
    cout << a << " + " << b << " = " << a + b;
}
void mult(int a, int b) {
    cout << a << " * " << b << " = " << a * b;
}
int main(int argc, char* argv[])
{
    if (argc < 4) {
        cout << "Too few options";
        return 1;
    }
    if (argc > 4) {
        cout << "Too many options";
        return 1;
    }
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    if (strcmp(argv[1], "-m") == 0)
        mult(x, y);
    else
        if (strcmp(argv[1], "-a") == 0)
            add(x, y);
        else {
            cout << "Unknown operation";
            return 1;
        }

    return 0;
}
