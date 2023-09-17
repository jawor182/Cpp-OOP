#include<iostream>
#include<string>
using namespace std;
string color = "\033[31m";

class drzewko{
    public:
        int wysokosc;
        char symbol;
        void print() {
        cout << color;
        for (int i = 0; i < this->wysokosc; i++) {
            for (int j = 0; j < this->wysokosc - i - 1; j++) {
                cout << ' ';
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << symbol;
            }
            cout << endl;
        }
        cout << "\033[0m";
    }
};

int main(){
    class drzewko choinka;
    choinka.symbol = '#';
    choinka.wysokosc = 5;
    choinka.print();
    
    return 0;
    
}
