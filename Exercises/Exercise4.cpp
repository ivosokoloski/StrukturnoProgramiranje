//Да се напише програма во која се внесуваат четири броеви. 
//Доколку производот на првите два броја е парен број и производот на последните два броја е непарен број,
//да се испечати 1, во спротивно да се испечати 0.
//Write a program in which four numbers are entered. 
//If the product of the first two numbers is an even number and the product of the last two numbers is an odd number,
//print 1, otherwise print 0.
//

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a*b)%2==0&&(c*d)%2!=0)
        cout<<1;
    else
        cout<<0;

    return 0;

}
