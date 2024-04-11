#include <iostream>     
#include <cmath>

using namespace std;
 
class fraction{

private:

    float num, den;
    

public:
    double my_number;
    
    fraction(float nu, float de){

        num = nu;
        den = de;
        my_number = num/den;

        if (den == 0){
            cerr << "Value od den can not be equal to 0!" << endl;
            
        }

    }

        void display_fraction(){
        cout << num << "/" << den << " = " << my_number << endl;
    }
};



int main ()
{    

    //fraction f1(1,0);
    fraction f2(2,3);
    f2.display_fraction();
   
return 0;
}