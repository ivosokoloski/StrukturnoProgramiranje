//Да се напише програма која од стандарден влез чита цел број(денови).
//На излез да се отпечати колку години, месеци и денови се тоа.
//Претпоставуваме дека сите месеци имаат 30 дена и секоја година има 365 дена.
//Write a program that reads an integer (days) from standard input.
//You will need to calculate how many years, months and days it is.
//We assume that all months have 30 days and each year has 365 days.


#include <iostream>
using namespace std;
int main(){
    int denovi, meseci, godini;
    cin>>denovi;
    godini = (denovi/365);
    meseci = (denovi%365)/30;
    denovi = (denovi%365)%30;
    cout<<"Years: "<<godini<<", months: "<<meseci<<", days: "<<denovi;
    return 0;

}