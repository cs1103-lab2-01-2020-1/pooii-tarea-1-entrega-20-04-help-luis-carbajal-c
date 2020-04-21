#include "stack.h"

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::Stack(const Stack &other) {
    this->elements = other.elements;
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack& other) {
    this->elements = other.elements;
    return *this;
}

template <typename T>
void Stack<T>::push(const T &elem) {
    this->elements.push_back(elem);
}


template <typename T>
void Stack<T>::pop() {
    this->elements.pop_back();
}

template <typename T>
T const& Stack<T>::top() {
    return this->elements.back();
}

template <typename T>
bool Stack<T>::empty() {
    return this->elements.empty();
}

template <typename T>
bool Stack<T>::operator==(const Stack &other) {
    return this->elements == other.elements;
}

template <typename T>
bool Stack<T>::operator!=(const Stack &other) {
    return this->elements != other.elements;
}

template <typename T>
size_t Stack<T>::size() {
    return this->elements.size();
}

template <typename T>
void Stack<T>::emplace(const T &elem) {
    this->elements.emplace_back(elem);
}

template <typename T>
void Stack<T>::swap(Stack &other) {
    vector<T> temp = other.elements;
    other.elements = this->elements;
    this->elements = temp;
}

template <typename T>
void Stack<T>::print_elements(ostream &os) {
    os << "[";
    for (size_t i = 0; i < this->elements.size(); ++i) {
        os << this->elements[i];
        if (i != this->elements.size() - 1) os << ", ";
    }
    os << "]";
}

template <typename U>
ostream& operator<<(ostream& os, Stack<U> const& s) {
    os << "[";
    for (size_t i = 0; i < s.elements.size(); ++i) {
        os << s.elements[i];
        if (i != s.elements.size() - 1) os << ", ";
    }
    os << "]";
    return os;
}

