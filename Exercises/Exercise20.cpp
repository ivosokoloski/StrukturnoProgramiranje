//Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот #
//(секој од редовите не е подолг од 80 знаци).
//Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат меѓу z1 и z2 (без нив).
//Секоја подниза се печати во нов ред.
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


int main(){
    char z1,z2;
    cin>>z1>>z2;
    char array[101];
    while(cin.getline(array,101)){
        if(array[0]=='#'){
            break;
        }
        int end=0;
        for(int i=0;i< strlen(array);i++){
            if(array[i]==z2){
                break;
            }
            end++;
        }

        for(int i=0;i< strlen(array);i++){
            if(array[i]==z1){
                for(int k=i+1;k<end;k++){
                    cout<<array[k];
                }
                cout<<endl;
                break;
            }

        }



    }
}
