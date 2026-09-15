#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std; 

void ReadNumbers(int& Num1, int& Num2,int& Num3)
{
    cout << "Please enter Number 1 ? " << endl;
    cin >> Num1;

    cout << "Please enter Number 2 ? " << endl;
    cin >> Num2;

    cout << "Please enter Number 3 ? " << endl;
    cin >> Num3;
}

int MaxOf2Numbers(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2 && Num1>Num3)
        return Num1;
    else if (Num2>Num1 && Num2>Num3)
        return Num2;
    else { 
        return Num3; }
}


void PrintResults(int Max)
{
   
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);

    PrintResults(MaxOf2Numbers(Num1, Num2,Num3));

    return 0;  // Return 0 to indicate successful execution.
}
