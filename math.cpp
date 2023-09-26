/*  maths function
ceil => round up value
floor => round down value
round => rounded down value 
sqrt => square value
pow(x,y) =>x to power value y
abs => absulute value 
rand => random value generate  
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"value is:"<<ceil(2.9)<<endl;
    cout<<"value is:"<<ceil(-2.3)<<endl;
    cout<<"value is:"<<floor(2.9)<<endl;
    cout<<"value is:"<<floor(-2.3)<<endl;
    cout<<"value is:"<<round(12.9)<<endl;
    cout<<"value is:"<<round(-2.5)<<endl;
    cout<<"value is:"<<sqrt(9)<<endl;
    cout<<"value is:"<<sqrt(6)<<endl;
    cout<<"value is:"<<pow(9,2)<<endl;
    cout<<"value is:"<<pow(6,3)<<endl;
    cout<<"value is:"<<abs(92)<<endl;
    cout<<"value is:"<<abs(-6)<<endl;
    cout<<"value is:"<<rand()<<endl;
    cout<<"value is:"<<rand()%100<<endl;
    cout<<"value is:"<<rand()%50<<endl;
}