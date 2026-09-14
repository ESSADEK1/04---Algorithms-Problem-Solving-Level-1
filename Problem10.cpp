#include <iostream>
using namespace std;

void ReadMarks(int& Num1, int& Num2, int& Num3) {
    cout << "Enter Num1: ";
    cin >> Num1;

    cout << "Enter Num2: ";
    cin >> Num2;

    cout << "Enter Num3: ";
    cin >> Num3;
}

int SumofMarks(int Num1, int Num2, int Num3) {
    return Num1 + Num2 + Num3;
}

float AverageMarks(int Num1,int Num2,int Num3) {
    return (float)SumofMarks(Num1, Num2, Num3) / 3;
}

void PrintMarks(int Total) {
    cout << "\n The total sum of numbers is: " << Total << endl;

}


int main() {

    int Num1, Num2, Num3;

    ReadMarks(Num1, Num2, Num3);
    PrintMarks(AverageMarks(Num1, Num2, Num3));
    return 0;
}
