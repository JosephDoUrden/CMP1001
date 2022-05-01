#include <iostream>

using namespace std;

int main(){
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "               Computes and displays the area of a geometrical shape               \n";
	cout << "-----------------------------------------------------------------------------------\n";
    cout << "                            Yusufhan Saçak      2105131                      \n\n\n\n";

    char type;
    double a=0, h=0, r=0, PI=3.14;
    bool flag=true;
    while (flag)
    {
        cout << "-----------------------------------------------------------------------------------\n";
        cout << "                   " 
        << "Square: s/S " << "Rectangle: r/R " << "Circle: c/C " << "Exit: e/E" << endl;
        cout << "-----------------------------------------------------------------------------------\n";
        cout << "Enter type of a geometrical shape: ";
        cin >> type;

        switch (type)
        {
        case 's':
        case 'S':
            cout << "The edge length (a): ";
            cin >> a;
            cout << "\nThe area of the square: " << a*a << "\n\n\n" << endl;
            break;
        case 'r':
        case 'R':
            cout << "The edge length (a): ";
            cin >> a;
            cout << "The edge height (h): ";
            cin >> h;
            cout << "\nThe area of the rectangle: " << a*h << "\n\n\n" << endl;
            break;
        case 'c':
        case 'C':
            cout << "Radius (r): ";
            cin >> r;
            cout << "\nThe area of the circle: " << PI*r*r << "\n\n\n" << endl;
            break;
        case 'e':
        case 'E':
            flag=false;
            break;
        default:
            break;
        }
    }
}