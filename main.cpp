#include <iostream>
#include "pool.h"

struct A {
    A() { std::cout << "A()\n"; }
    ~A() { std::cout << "~A()\n"; }
    void f() { std::cout << "f\n"; }
};

int main() {
    common::Pool<A> mypool("A",2);
    {
        auto p1 = mypool.alloc();
        p1->f();
        auto p2 = mypool.alloc();
        p2->f();
    }
    auto p3 = mypool.alloc();
    p3->f();
    auto p4 = mypool.alloc();
    p4->f();
    auto p5 = mypool.alloc();
    p5->f();
}
