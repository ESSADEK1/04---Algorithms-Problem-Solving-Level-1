#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std; 

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter Number 1 ? " << endl;
    cin >> Num1;

    cout << "Please enter Number 2 ? " << endl;
    cin >> Num2;

   ;
}

int CalculateArea(int Num1, int Num2){
    return ( Num1*Num2);

}


void PrintResults(int Result)

{
   cout<<"Area : "<<Result;
 }

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintResults(CalculateArea(Num1,Num2));
    return 0;  // Return 0 to indicate successful execution.
}
