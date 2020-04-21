#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    Stack();
    Stack(const Stack &other);
    Stack& operator=(const Stack& other);
    void push(T const& elem);
    void pop();
    T const& top();
    bool empty();
    bool operator==(const Stack &other);
    bool operator!=(const Stack &other);
    void print_elements(ostream& os);
    size_t size();
    void emplace(T const& elem);
    void swap(Stack& other);
    template<typename U>
    friend ostream& operator<<(ostream& os, Stack<U> const& s);
};


#endif //STACK_H
