#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

class konto_bankowe{
        
    private:

        const int numer_konta;
        float saldo = 0;
        string historia_transakcji;

        string aktualna_data(){
            time_t now = time(0);
            char* dt = ctime(&now);
            return dt;
        }

    public:

        konto_bankowe(int numer) : numer_konta(numer){}

        float wplacanie(float x){
            saldo += x;
            historia_transakcji = aktualna_data() + "Wplata wynosila: " + to_string(x) + "\n";
            return saldo;
        }

        float wyplacanie(float x){
            saldo -= x;
            historia_transakcji = aktualna_data() + "Wyplata wynosila: " + to_string(x) + "\n";
            return saldo;
        }

        int pobierz_numer_konta() const {
            return numer_konta;
        }

        string pobierz_historie_transakcji() {
            return historia_transakcji;
        }
    };

    int main(){

        konto_bankowe konto(26628484);
        konto_bankowe konto2(4647474);

        cout << "Konto: " << konto.pobierz_numer_konta() << endl;
        cout << "Wartosc salda po wplacie: " << konto.wplacanie(1000) << endl;
        cout << "Wartosc salda po wyplacie: " << konto.wyplacanie(250) << endl;
        cout << "Historia: " << konto.pobierz_historie_transakcji();

        cout << "Konto: " << konto2.pobierz_numer_konta() << endl;
        cout << "Wartosc salda po wplacie: " << konto2.wplacanie(500) << endl;
        cout << "Wartosc salda po wyplacie: " << konto2.wyplacanie(50.03) << endl;
        cout << "Historia: " << konto2.pobierz_historie_transakcji();

        return 0;
    }
