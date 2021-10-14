//
// Created by ubuntu on 2021/10/14.
//

#ifndef DEMO01_TEMPLATE_DEMO_H
#define DEMO01_TEMPLATE_DEMO_H

template<typename T1, typename T2>
class TemplateDemo {
private:
    T1 I;
    T2 J;

public:
    TemplateDemo(T1 a, T2 b);
    void show();
};

template<typename T1, typename T2>
TemplateDemo<T1, T2>::TemplateDemo(T1 a, T2 b):I(a), J(b)
{
}

template<typename T1, typename T2>
void TemplateDemo<T1, T2>::show()
{
    std::cout << "I=" << I << ", J=" << J << std::endl;
}


#endif //DEMO01_TEMPLATE_DEMO_H
