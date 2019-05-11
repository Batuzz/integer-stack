#include "Stack.hpp"
#include <iostream>

void Stack::print() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        std::cout << tmp_element->value << std::endl;
        tmp_element = tmp_element->get_next_element();
    }
}

void Stack::push(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        new_element->set_next_element(this->first_element);
        this->first_element = new_element;
    }
}

int Stack::pop() {
    int value_to_return =  this->first_element->value;
    this->first_element = this->first_element->get_next_element();
    return value_to_return;
}
