//
// Created by ubuntu on 2021/11/16.
//


#include <stdio.h>
#include "function_pointer.h"

void MyFun(int x)
{
    printf("%d\n", x);
}

void FuncShow()
{
    MyFun(10); /* 这里是调用MyFun(10)函数 */
    FunP = MyFun; /* 将MyFun函数的地址赋给FunP变量 */
    FunP(20); /* （★）这是通过函数指针变量来调用MyFun函数的。*/
}
