#include <iostream>     
#include <complex> 

using namespace std;
 
class my_number{

public:

complex<double> mycomplex;

my_number(double a, double b) : mycomplex(a,b){

    a = real(mycomplex);
    b = imag(mycomplex);

}

void display_number(){
    cout << "Number: " << mycomplex << endl;
    cout << "Real: " << real(mycomplex) << endl;
    cout << "Imaginary: " << imag(mycomplex) << endl;
    
}

};

int main ()
{    
 
 my_number number1(1,2);
 number1.display_number();
   
return 0;
}