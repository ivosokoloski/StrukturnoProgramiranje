//Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$
//ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:
//Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100).
//Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
double funk(double array[],int size,int start,double sum){
    if(start==size+1){
        return sum;
    }
    return sum+=array[start]+(1/funk(array,size,start+1,sum));

}

int main(){
    double array[101];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int start=0;
    double sum=0;
    cout<<funk(array,size,start,sum);
}
