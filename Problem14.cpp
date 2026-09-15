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

int SwapFunctions(int& Num1, int& Num2){
    int Temp;
    Temp =Num1;
    Num1=Num2;
    Num2=Temp;
    return (Num1,Num2);

}


void PrintResults(int Num1,int Num2)
{
   cout<<"Num1 Now : "<<Num1<<endl;
   cout<<"Num2 Now : "<<Num2;
 }

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    SwapFunctions(Num1,Num2);
    PrintResults(Num1,Num2);


    return 0;  // Return 0 to indicate successful execution.
}
