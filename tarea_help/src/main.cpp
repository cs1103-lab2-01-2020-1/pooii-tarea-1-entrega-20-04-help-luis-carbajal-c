#include "template/stack.h"
#include "template/stack.cpp"

int main() {

    Stack<int> intstack;
    Stack<string> stringstack;

    intstack.push(100);
    intstack.push(200);
    cout<<"intstack = "<<intstack<<endl;
    cout<<"intstack.top() = "<<intstack.top()<<endl;
    cout<<"intstack.size() = "<<intstack.size()<<endl;

    cout<<endl;

    stringstack.emplace("utec");
    cout<<"stringstack = "<<stringstack<<endl;
    cout<<"stringstack.top() = "<<stringstack.top()<<endl;
    cout<<"stringstack.size() = "<<stringstack.size()<<endl;

    cout<<endl;

    Stack<int> intstack2 = intstack;
    Stack<string> stringstack2(stringstack);
    stringstack2.pop();

    cout<<"intstack2 = "; intstack2.print_elements(cout); cout<<endl;
    cout<<"stringstack2 = "; stringstack2.print_elements(cout); cout<<endl;

    cout<<endl;

    cout<<"intstack == intstack2: "<<(intstack == intstack2)<<endl;
    cout<<"stringstack != stringstack2: "<<(stringstack != stringstack2)<<endl;
    cout<<"intstack2.empty(): "<<intstack2.empty()<<endl;
    cout<<"stringstack2.empty(): "<<stringstack2.empty()<<endl;

    cout<<endl;

    cout<<"stringstack.swap(stringstack2): "<<endl;
    stringstack.swap(stringstack2);
    cout<<"stringstack = "<<stringstack<<endl;
    cout<<"stringstack2 = "<<stringstack2<<endl;

    return 0;
}
