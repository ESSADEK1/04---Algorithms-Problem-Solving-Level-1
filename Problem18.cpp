#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <math.h>
using namespace std; 
const float PI=3.14;

int ReadNumbers()
{
    int H;
    cout << "Please enter R  ? " << endl;
    cin >> H;

  return H;
}

float CalculateCircleArea( int H){
float Area;
Area=PI*pow(H,2);
return (float)Area;

}


void PrintResults(float Result)

{
   cout<<"Area : "<<Result;
 }

int main()
{

    
    PrintResults(CalculateCircleArea(ReadNumbers()));
    return 0;  // Return 0 to indicate successful execution.
}
