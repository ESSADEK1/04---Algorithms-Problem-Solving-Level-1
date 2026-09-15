#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <math.h>
using namespace std; 

int ReadDiametre()
{
    int D;
    cout << "Please enter Diameter  ? " << endl;
    cin >> D;

  return D;
}

float CalculateBasedDiameter( int D){
const float PI=3.14;
float Area=(PI*pow(D,2))/4;
return (float)Area;

}


void PrintArea(float Result)

{
   cout<<"Area : "<<Result;
 }

int main()
{

    
    PrintArea(CalculateBasedDiameter(ReadDiametre()));
    return 0;  // Return 0 to indicate successful execution.
}
