// refer to https://qiita.com/MasayaMizuhara/items/f43085f309b9163de436#321-%E9%96%A2%E6%95%B0%E3%83%86%E3%83%B3%E3%83%97%E3%83%AC%E3%83%BC%E3%83%88
// function template

#include <iostream>

template <class T>
T max(const T &x, const T &y) 
{
    return x < y ? y : x;
}

int main() {
    std::cout << max(1,4) << std::endl;
    std::cout << max(43,1) << std::endl;
}