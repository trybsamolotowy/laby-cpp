#include <iostream>

using namespace std;


class hello{

private:

    string msg;

public:

    hello(string a):msg(a){}

    void virtual toString(){
        return msg;
    }
};