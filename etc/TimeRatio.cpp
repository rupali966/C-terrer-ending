#include <iostream>
using namespace std;


float ratioOfTime();
int main()
{
  float calculate;
  calculate = ratioOfTime();
  cout<<"\n---------------------"<<endl;
  cout << "Hare End the Program"<< endl;
}
float ratioOfTime()
{
  float enterPoint, endPoint, ratio;
  cout << "Displasement Ratio" << endl;
  cout << "Enter the Starting Time" << endl;
  cin >> enterPoint;
  cout << "Enter the Ending Time " << endl;
  cin >> endPoint;
  cout << "Your Time Ratio is = " << endl;
  ratio = endPoint - enterPoint;
  cout << ratio;
  return ratio;
}
