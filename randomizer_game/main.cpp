#include<iostream>
#include<cstdlib>
#include<string>
#include<chrono>
#include<thread>
using namespace std;

int main(){
    int x, runde=8;
    string nrales;
    srand(time(0));
    x = rand() % 100;
    string titlu = "Randomizer.hehe (Joc de ghicit un numar aleator)";
    string input;

    for (char c : titlu) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    cout<<"\nDoriti sa incepeti?(Y/N)";
    while(true) {
        getline(cin, input);
        if (input == "Y") {
            while(runde > 0){
                cout<<"Introduceti varianta de raspuns: ";
                getline(cin, nrales);
                cout<<endl;

                if(nrales!="0"){
                    if(stoi(nrales)>x){
                        cout<<"Numarul este prea mare"<<endl;
                        cout<<"Mai aveti "<<--runde<<" sanse"<<endl;
                        cout<<endl;
                    } else if(stoi(nrales)<x){
                        cout<<"Numarul este prea mic"<<endl;
                        cout<<"Mai aveti "<<--runde<<" sanse"<<endl;
                        cout<<endl;
                    }
                }

                if(stoi(nrales)==x){
                    cout<<"Felicitari!! Ati ghicit numarul din "<<8-runde<<" sanse"<<endl;
                    break;
                }
            }

            if(runde == 0){
                cout<<"Ati ramas fara sanse! Numarul este "<<x<<"."<<endl;
                break;
            }
        }

        else if (input == "N") {
            return 0;
        } else {
            cout << "Eroare. Introduceti numai Y sau N" << endl;
        }
    }
    return 0;
}
