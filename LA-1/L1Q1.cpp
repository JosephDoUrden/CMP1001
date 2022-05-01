#include <iostream>

using namespace std;

int main(){
    double a, b, result_rectangle, result_ellipse;
    float PI = 3.14;

    cout << "Please enter the first value: ";
    cin >> a;
    cout << "Please enter the second value:";
    cin >> b;

    result_rectangle=a*b;
    result_ellipse=PI*a*b;

    cout << "The area of the rectangle: " << result_rectangle << endl;
    cout << "The area of the ellipse: " << result_ellipse << endl;
}
