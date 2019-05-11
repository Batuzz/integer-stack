#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    Stack* stack = new Stack();
    
    
    std::cout << "Pushing values 5,6,7,8 on stack and printing stack's elements" << std::endl;
    
    stack->push(5);
    stack->push(6);
    stack->push(7);
    stack->push(8);

    stack->print();
    
    std::cout << "Popping 2 elements from stack and printing it" << std::endl;
    
    int some_value_from_stack = stack->pop(); // we can get value from stack
    stack->pop();
    stack->print();
    
    return 0;
}
