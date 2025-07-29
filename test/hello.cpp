#include <iostream>
#include "file_module.cpp"

using namespace std;
using std::cout;
using std::endl;

// namespace mychai
// {
//     void display()
//     {
//         // comment
//     }
// }

int main()
{
    // mychai::display();

    cout << "Hello Chai from C++.";
    std::cout << "Hello Chai from C++." << std::endl;

    file_module_func();
    return 0;
}

int hitesh()
{
    return 0;
}