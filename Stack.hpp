#include "ListElement.hpp"

class Stack {
public:
    void print();
    void push(int number);
    int pop();
private:
    ListElement* first_element;
    ListElement* last_element;
};
