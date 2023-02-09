#include <iostream>
#include <string>

using namespace std;

int q;

float x, y, z;

int main(){

    cout << "\n1: Dodawanie \n2: Odejmowanie \n3: Mnozenie \n4: Dzielenie" << "\n \nWybierz typ obliczenia: "; 
    cin >> q;

    if (q == 1){
        cout << "Podaj liczbe A oraz B: \n \nA:" << endl;
        cin >> x;
        cout << "\nB:" << endl;
        cin >> y;

        float suma = (x + y);
        cout << "\nsuma liczb A oraz B wynosi: " << suma <<"\n \n";

        int end;

        cout << "aby zakonczyc wpisz '1' \n";
        cin >> end;

        while(end != 1){

            cout << "aby zakonczyc wpisz '1' \n";
            cin >> end;

        }

    }
    else if(q == 2){

        cout << "Podaj liczbe A oraz B: \n \nA:" << endl;
        cin >> x;
        cout << "\nB:" << endl;
        cin >> y;

        float roznica = (x - y);
        cout << "\nroznica liczb A oraz B wynosi: " << roznica <<"\n \n";

        int end;

        cout << "aby zakonczyc wpisz '1' \n";
        cin >> end;

        while(end != 1){

            cout << "aby zakonczyc wpisz '1' \n";
            cin >> end;

        }

    }
        else if(q == 3){

        cout << "Podaj liczbe A oraz B: \n \nA:" << endl;
        cin >> x;
        cout << "\nB:" << endl;
        cin >> y;

        float iloczyn = (x * y);
        cout << "\niloczyn liczb A oraz B wynosi: " << iloczyn <<"\n \n";

        int end;

        cout << "aby zakonczyc wpisz '1' \n";
        cin >> end;

        while(end != 1){

            cout << "aby zakonczyc wpisz '1' \n";
            cin >> end;

        }
        
    }
    else if(q == 4){

        cout << "Podaj liczbe A oraz B: \n \nA:" << endl;
        cin >> x;
        cout << "\nB:" << endl;
        cin >> y;

        float iloraz = (x / y);
        cout << "\niloraz liczb A oraz B wynosi: " << iloraz <<"\n \n";

        int end;

        cout << "aby zakonczyc wpisz '1' \n";
        cin >> end;

        while(end != 1){

            cout << "aby zakonczyc wpisz '1' \n";
            cin >> end;

        }
        
    }



    return 69;
}