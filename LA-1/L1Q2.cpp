#include <iostream>

using namespace std;

int main(){
    double voltage, resistance_1, resistance_2, resistance_3;
    double current_1, current_2, current_3;
    //voltage=current*resistance

    cout << "Please enter the voltage: ";
    cin >> voltage;
    while(voltage<0){
        cout << "Please enter the voltage: ";
        cin >> voltage;
    }
    cout << "Please enter the first resistance: ";
    cin >> resistance_1;
    while(resistance_1<0){
        cout << "Please enter the first resistance: ";
        cin >> resistance_1;
    }
    cout << "Please enter the second resistance: ";
    cin >> resistance_2;
    while(resistance_2<0){
        cout << "Please enter the second resistance: ";
        cin >> resistance_2;
    }
    cout << "Please enter the third resistance: ";
    cin >> resistance_3;
    while(resistance_3<0){
        cout << "Please enter the third resistance: ";
        cin >> resistance_3;
    }

    current_1=voltage/resistance_1;
    current_2=voltage/resistance_2;
    current_3=voltage/resistance_3;

    cout << "Current 1: " << current_1 << endl;
    cout << "Current 2: " << current_2 << endl;
    cout << "Current 3: " << current_3 << endl;
}
