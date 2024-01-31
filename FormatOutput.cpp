#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.141592653;
    cout << endl;
    cout << "Default display for floating point values: "
        << PI << endl;
    cout << "Default display: " << 0.1 * PI << endl;
    cout << "Enter a real value with 4 significant digits: ";
    double value;
    cin >> value;
    cout << "The value is shown with 4 significant digits: " << value << endl;

    cout << setprecision(4);
    cout << "All following floating point values are now shown with 4 significant digits: "
        << PI << ", " << 0.1 * PI << ", " << value << endl;
    
    cout << "Dispaly floating point values using 2 decimal places: \n";
    cout << fixed << setprecision(2);
    cout << PI << ", " << 0.1 * PI << ", " << value << endl;

    cout << endl << "Python\t" << "2023 Spring\n";
    cout << "JAVA\t" << "2023 Fall\n";
    cout << "C++\t" << "2024 Spring\n";

    cout << endl << "Display the table with values aligned to right:\n";
    cout << setw(7) << "Python" << setw(12) << "2023 Spring" << endl;
    cout << setw(7) << "Java" << setw(12) << "2023 Fall" << endl;
    cout << setw(7) << "C++" << setw(12) << "2024 Spring" << endl;

    cout << endl << "Absolute value: " << abs(-1) << endl;
    cout << "Square root of 2: " << sqrt(2) << endl;
    cout << "2 to the power of 3: " << pow(2,3) << endl;
    cout << "Natural log of 10: " << log(10) << endl;
    cout << fixed << setprecision(8) << "Computed PI: " << acos(-1.0) << endl;
    cout << endl;


    int degrees = 30;
    double radians = degrees * PI / 180;
    double sines = sin(radians);
    double cosines = cos(radians);
    double tangents = tan(radians);

    cout << "Degrees\t" << "Radians\t" << "Sine\t" << "Cosine\t" << "Tangent\n";
    cout << degrees << "\t" << fixed << setprecision(4) << radians << "\t" << sines << "\t" 
        << cosines << "\t" << tangents << "\n";

    int degrees1 = 60;
    double radians1 = degrees1 * PI / 180;
    double sines1 = sin(radians1);
    double cosines1 = cos(radians1);
    double tangents1 = tan(radians1);
    cout << degrees1 << "\t" << fixed << setprecision(4) << radians1 << "\t" << sines1 << "\t" 
        << cosines1 << "\t" << tangents1 << "\n" << endl;
    return 0;
}