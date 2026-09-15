#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <math.h>
using namespace std; 

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter Number 1 ? " << endl;
    cin >> Num1;

    cout << "Please enter Number 2 ? " << endl;
    cin >> Num2;

   ;
}

float CaluclatreAreaSide(int Num1, int Num2){

    return (float) (Num1*sqrt(pow(Num2,2)-pow(Num1,2)) );

}


void PrintResults(float Result)

{
   cout<<"Area : "<<Result;
 }

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintResults(CaluclatreAreaSide(Num1,Num2));
    return 0;  // Return 0 to indicate successful execution.
}
