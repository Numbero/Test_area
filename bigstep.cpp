// bigstep.cpp -- count as directed
#include <iostream>
int main()
{
    using std::cin;
    using std::cout; // a using declaration
    using std::endl;
    ;
    cout << "Enter an integer: ";
    int by;
    int a[] = {123, 12312, 4123, 532, 543, 6436, 546, 457, 467, 457, 547, 457, 4};
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    // cin.get();
    // cin.get();
    return 0;
}
