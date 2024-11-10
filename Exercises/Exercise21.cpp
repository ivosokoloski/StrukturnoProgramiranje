//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
//Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа.
//Функцијата е зададена со следниот прототип:
//
//int BrojPozitivni(int niza[], int n);
//
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <iostream>

using namespace std;
int funk(int array[],int size,int counter){

    if(size==0){
        return counter;
    }
    if(array[size-1]>0){
        counter++;
    }
    return funk(array,size-1,counter);
}


int main() {
    int array[100];
    int size;
    cin>>size;
    int counter=0;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<funk(array,size,counter);


}
