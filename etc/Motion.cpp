#include <iostream>
using namespace std;


float ratioOfDisplacement();
int main()
{
  float calculate;
  calculate = ratioOfDisplacement();
  cout<<"\n---------------------"<<endl;
  cout << "Hare End the Program"<< endl;
}
float ratioOfDisplacement()
{
  float enterPoint, endPoint, ratio;
  cout << "Displasement Ratio" << endl;
  cout << "Enter the Starting Point" << endl;
  cin >> enterPoint;
  cout << "Enter the End point" << endl;
  cin >> endPoint;
  cout << "Your Ratio is = " << endl;
  ratio = endPoint - enterPoint;
  cout << ratio;
  return ratio;
}