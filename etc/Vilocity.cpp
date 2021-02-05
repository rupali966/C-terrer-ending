// area.cpp
// Example for a simple function returning a value.
//-----------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

float ratioOfTime ();
float ratioOfDistance ();
// Prototype
int main()

{
  float result1, result2;
  result1 = ratioOfTime();
  result2 = ratioOfDistance();
  cout << "Ratio of time = "<< result1<< "\n";
  cout << "Ration of Displacement  = "<< result2;
  return 0;
}
// Defining the function area():
// Computes the area of a rectangle.


float ratioOfTime() 
{
  float startingTime, endTime;
  cout << "Enter Starting Time : "; 
  cin >> startingTime; 
  cout << "Enter ending Time : "; 
  cin >> endTime; 
  return (endTime - startingTime);
}
float ratioOfDistance() 
{
  float startingPoint, endPoint;
  cout << "Enter Starting Point : "; 
  cin >> startingPoint; 
  cout << "Enter end Point : "; 
  cin >> endPoint; 
  return (endPoint - startingPoint);
}

