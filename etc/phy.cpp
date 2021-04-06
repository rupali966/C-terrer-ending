#include "phycics.h"
#include<iostream>
#include <cmath>

// hare we also getting the attribution but by parameter 

double vector::getNotation(double *x,double *y, double *z){
vector::x = *x;
vector::y = *y;
vector::z = *z;
return 0;
};
// hare am i im gaining the attribeutes 
double vector::getNotation(){
double x{}, y{}, z{};
std::cout<<"Enter the X value : ";
std::cin>>x;
vector::x = x;
std::cout<<"Enter the Y value : ";
std::cin>>y;
vector::y = y;
std::cout<<"Enter the Z value : ";
std::cin>>z;
vector::z = z;
return 0;
};
// getting the  attribuets 
double vector::getx(){
return x;
}

double vector::gety(){
return y;
}

double vector::getz(){
return z;
}
// hare we can see our the attribuets 

void vector::showNotation(){
std::cout<<"The value of the x = "<<x<<"\n";
std::cout<<"The value of the y = "<<y<<"\n";
std::cout<<"The value of the z = "<<z<<"\n";

}

// hare we can calculating the magnitued 
double vector::calculatethemagnitude(){
double result;
result = sqrt(x*x+y*y+z*z);
magnitude = result;
return result;
}

void vector::showmagnitude(){
std::cout<<"The value of the magnitude = "<<magnitude<<"\n";
}

double product::dotproduct(double *ax,double *ay,double *az,double *bx,double *by,double *bz){
double result;
result = *ax * *bx+ *ay * *by+*az * *bz;
return result;
}


double product::crossproduct(double *ax,double *ay,double *az,double *bx,double *by,double *bz, double *i , double *j , double *k){
double result;
result = ((*ay * *bz)-(*az * *by)) * *i + ((*az * *bx)-(*ax * *bz)) * *j + ((*ax * *by)-(*ay * *bx)) * *k;
return result;
}

double product::dotproducta(){
double result;
std::cout<<"Dot product \n";
vector a1, a2;
std::cout<<"First Notation \n";
a1.getNotation();
std::cout<<"Second Notation \n";
a2.getNotation();
result = (a1.getx() * a2.getx()) + (a1.gety() * a1.gety()) + (a1.getz() * a2.getz());
return result;
}








double product::dotproductbyangle(){

vector a, b;
double result, angel;
std::cout<<"Dot product by angel \n";
std::cout<<"Notation of first \n";
a.getNotation();
double notationofa = a.calculatethemagnitude();
std::cout<<"Notation of second \n";
b.getNotation();
double notationofb = b.calculatethemagnitude();
std::cout<<"Get the theta/ angle :";
std::cin>> angel;
result = notationofa * notationofb * cos(angel);
return result;
};


double product::crossproductbyangle(){

vector a, b;
double result, angel;
std::cout<<"cross product by angel \n";
std::cout<<"Notation of first \n";
a.getNotation();
double notationofa = a.calculatethemagnitude();
std::cout<<"Notation of second \n";
b.getNotation();
double notationofb = b.calculatethemagnitude();
std::cout<<"Get the theta/ angle :";
std::cin>> angel;
result = notationofa * notationofb * sin(angel);
return result;
};









double product::crossproducta(){

double result;
vector a, b;
double i, j, k;
std::cout<<"Cross product \n";
std::cout<<"Enter the i = ";
std::cin>>i;
std::cout<<"Enter the j = ";
std::cin>>j;
std::cout<<"Enter the k = ";
std::cin>>k;
std::cout <<"Notation of x "<<"\n";
a.getNotation();
std::cout <<"Notation of y "<<"\n";
b.getNotation();
result = (a.gety() * b.getz() - a.getz()*b.gety()) * i + (a.getz()*b.getx() - a.getx()*b.getz()) * j + (a.getx()*b.gety() - a.gety()*b.getx()) * k;
return result;
}

/*
see how we can calculate you know 
 we can get crea the valuse using the  vector 
 
 first vector can crate product v.ax, v.ay ,v.az
// hare if we do this mean vector obj
// obj.x ,  obj.y,  obj.z

 second vector can create the v.bx, v.by, v.bz
 the we can calculate there dot and cross produt 
 obj.x*obj2.x + obj.y*obj2.y + obj.z*obj2.z
 // then we can calculate the product 
 then we can calculate the cross product by 

*/

