
#include <iostream>
#include <fstream> 
#include "Solid.h"  // Додаємо заголовковий файл Solid.h
#include "Circle.h" 
#include "Romb.h"  

using namespace std;

int main() {
    Solid* solid; 
    int choice;

    cout << "Enter 1 for Romb or 2 for Circle: ";
    cin >> choice;

    ofstream outputFile("shapes_output.txt"); 

    if (choice == 1) {
        solid = new Romb(); 
        solid->inputDimensions();
        double area = solid->getArea();
        double circumference = solid->getCircumference();
        cout << "Area is: " << area << endl;
        cout << "Perimeter is: " << circumference << endl;

        
        outputFile << "Romb:" << endl;
        outputFile << "Area: " << area << endl;
        outputFile << "Perimeter: " << circumference << endl;

        delete solid;
    }
    else if (choice == 2) {
        solid = new Circle(); 
        solid->inputDimensions();
        double area = solid->getArea();
        double circumference = solid->getCircumference();
        cout << "Area is: " << area << endl;
        cout << "Circumference is: " << circumference << endl;

        
        outputFile << "Circle:" << endl;
        outputFile << "Area: " << area << endl;
        outputFile << "Circumference: " << circumference << endl;

        delete solid; 
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    outputFile.close(); 
    return 0;
}

