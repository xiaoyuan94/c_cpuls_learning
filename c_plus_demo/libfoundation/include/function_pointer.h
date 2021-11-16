//
// Created by ubuntu on 2021/11/16.
//

#ifndef DEMO01_FUNCTION_POINTER_H
#define DEMO01_FUNCTION_POINTER_H

void MyFun(int x);

/* 声明一个用以指向同样参数，返回值函数的指针变量。 */
void (*FunP)(int);

void FuncShow();

#endif
