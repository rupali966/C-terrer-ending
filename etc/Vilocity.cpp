
#include <iostream>

#include <iomanip>

using namespace std;



float ratioOfTime ();

float ratioOfDistance ();

float AverageVilocity ();

// Prototype

int main()



{

  float result1, result2, result3;

  result1 = ratioOfTime();

  result2 = ratioOfDistance();

  cout << "Ratio of time = "<< result1<< "\n";

  cout << "Ration of Displacement  = "<< result2 << "\n";

cout << "Average Vilocity = "<< result3 << "\n";

  return 0;

}







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


float AverageVilocity() {

  float x, y;

  x = ratioOfTime();

  y = ratioOfDistance();

  return (x/y);

  

}



