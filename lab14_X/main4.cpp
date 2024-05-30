#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename Class, typename T>
struct Person{

    constexpr Person(const char* aname, const int* aage): name{aname}, age{aage} {}

    using Type = T;

    const char* name;
    const int* age;

};


template<typename Class, typename T>
constexpr auto property(const char* aname, const int* aage){
    return Person<Class, T>(aname, aage);
}

int main(){
    
    
    

    return 0;

}