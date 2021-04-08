//
// Created by simiao on 2021/4/8.
//

#include <iostream>
#include "../include/base.h"

using std::cout;
class base {

public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};


