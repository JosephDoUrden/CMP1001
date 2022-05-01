#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "       Converts time given in seconds as an integer into “hh:mm:ss” format         \n";
	cout << "-----------------------------------------------------------------------------------\n";
    cout << "                            Yusufhan Saçak                            \n\n\n\n";

    int seconds, hours, minutes;

    cout << "Enter seconds: ";
    cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;

    cout << seconds << " seconds is equivalent to " << setw(2) << setfill('0') << int(hours) << ":" 
        << setw(2) << setfill('0') << int(minutes%60) << ":" 
        << setw(2) << setfill('0') << int(seconds%60) << endl;
    
}
