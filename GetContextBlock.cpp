#include <iostream>

void StackDemo()
{
    int x = 5;  // Stack variable

    std::cout << "\n=== STACK ===\n";
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;

    // Pause so you can inspect in debugger
    std::cout << "Press ENTER to continue...\n";
    std::cin.get();
}

void HeapDemo()
{
    int* p = new int(10); // Heap allocation

    std::cout << "\n=== HEAP ===\n";
    std::cout << "Value pointed to by p: " << *p << std::endl;
    std::cout << "Address stored in p (heap object): " << p << std::endl;
    std::cout << "Address of p itself (stack variable): " << &p << std::endl;

    delete p;
    p = nullptr;

    std::cout << "Press ENTER to continue...\n";
    std::cin.get();
}

int main()
{
    std::cout << "Stack and Heap Demonstration\n";

    StackDemo();
    HeapDemo();

    return 0;
}