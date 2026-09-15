#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <math.h>
using namespace std; 

void ReadNumbers(int&A, int&H)
{
    cout << "Please enter A  ? " << endl;
    cin >> A;

    cout << "Please enter H  ? " << endl;
    cin >> H;

   ;
}

float CalculateArea(int A, int H){

float Area=(A/2)*H;
return (float)Area;

}


void PrintResults(float Result)

{
   cout<<"Area : "<<Result;
 }

int main()
{
    int A, H;

    ReadNumbers(A, H);
    PrintResults(CalculateArea(A,H));
    return 0;  // Return 0 to indicate successful execution.
}
