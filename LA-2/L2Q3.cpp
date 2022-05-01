#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "       Calculates after s seconds whether the object hits the ground or not               \n";
	cout << "-----------------------------------------------------------------------------------\n";
    cout << "                            Yusufhan Saçak      2105131                      \n\n\n\n";

    double V_x, h, s, x, g=9.81, t, t_square;

    cout << "Enter x velocity: ";
    cin >> V_x;
    cout << "Enter the height of the cliff (h): ";
    cin >> h;
    cout << "Enter the seconds: ";
    cin >> s;

    t_square=(2*h)/g;
    t = sqrt(t_square);
    //Distance calculation
    x = V_x*t;
    
    if(t<=s){
        cout << "Object hit the ground\nTime until crash: " << t << endl;
        cout << "Final x distance: " << x << endl;
    }
    else{
        cout << "Object did not hit the ground." << endl;
        cout << "Final x distance: " << V_x*s << endl;
        cout << "Final height: " << h-(g*(s*s)/2) << endl;
    }
}