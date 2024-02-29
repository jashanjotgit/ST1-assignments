#include <iostream>
using namespace std;

class assignment
{
    int number, count = 0;

public:
    void get_data()
    {
        cout << "enter a number ";
        cin >> number;
    }

    void checking()
    {
        while (number % 8 == 0)
        {
            count++;
            cout << "enter a nummber ";
            cin >> number;
        }
    }

    void display()
    {
        cout << "total"
             << " " << count << " numbers are valid ";
    }
};
int main()
{

    assignment oops;
    oops.get_data();
    oops.checking();
    oops.display();
}