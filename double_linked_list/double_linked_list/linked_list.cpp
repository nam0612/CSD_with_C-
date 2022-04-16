
#include <iostream>
#include "ProductList.cpp"
#include <string>

int main()
{
    ProductList a;
    a.addTail(Product("123", "sadsda", 5, 6, 2.3));
    a.addTail(Product("1233", "sadsdaqe", 5, 6, 2.3));
    a.addTail(Product("12", "sadsdaqwe", 5, 6, 2.3));
    a.addTail(Product("1234", "sadsdawq", 5, 6, 2.3));
    
    a.printList();
    a.remove("123");
    
    a.addHead(Product("1236", "sadsdawq", 5, 6, 2.3));
    cout << endl << endl;
    a.printList();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
