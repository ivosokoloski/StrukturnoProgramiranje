//Да се напише програма која чита радиус на кружница од стандарден влез.
//На излез да се испечати периметарот и плоштината на кружницата.
//Write a program that reads the radius of a circle from standard input. Output the perimeter and area of the circle.


#include <iostream>
using namespace std;
int main(){
    double r,  plostina, perimetar;
    cin>>r;
    perimetar = (r*1.0)*2.0*3.14;
    plostina = ((r*1.0)*(r*1.0)*3.14);
    cout<<"Perimetar: "<<perimetar<<endl<<"Plostina: "<<plostina;

    return 0;

}