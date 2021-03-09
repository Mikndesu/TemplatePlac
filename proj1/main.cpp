// refer to http://www.nowhere.co.jp/blog/archives/20160728-230519.html

#include <iostream>

template<int N> struct Factorial{
    enum{ value = N * Factorial<N-1>::value};
};

template<> struct Factorial<0> {
    enum{ value = 1};
};

int main() {
    std::cout << Factorial<5>::value << std::endl;
    return 0;
}