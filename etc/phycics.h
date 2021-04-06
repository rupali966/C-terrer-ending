#include<iostream>
#include <cmath>
class vector{
	double x{} ,y{} , z{}, magnitude{};
	public:
	double getNotation();
	void showNotation();
	double getNotation(double *,double *, double *);
	double calculatethemagnitude();
	void showmagnitude();
	double getx();
	double gety();
	double getz();
	
};

class product{
public:
double dotproduct(double *,double *,double *,double *,double *,double *);
double crossproduct(double *,double *,double *,double *,double *,double *, double *,double *,double *);
double dotproducta();
double crossproducta();
double dotproductbyangle();
double crossproductbyangle();
};
