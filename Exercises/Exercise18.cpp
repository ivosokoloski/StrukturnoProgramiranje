//Од стандарден влез се читаат непознат број на редови додека не се прочита 0.
//Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред
//кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот.
//Се претпоставува дека ниту еден ред не е подолг од 100 знаци.
//
//Пример.
//
//Влез:
//dat.txt:
//aaa123aa222aa2aaa23aaaaa22
//        aaaaaaaaaaaa 23aaaa
//123 aaa aaa aaa aaa 12345 aaa aaa 2a
//0
//Излез:
//123 aaa aaa aaa aaa 12345 aaa aaa 2


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main() {
    char array[101];

    while(cin.getline(array,101)){
        char z1,z2;
        cin>>z1>>z2;
        char a[101];
        if(array[0]=='#'){
            break;
        }
        int counter=0;
        int c=0;
        int size=0;
        for(int i=0;i< strlen(array);i++){
            size++;
        }
        for(int i=0;i< strlen(array);i++){
            if(array[i]==z1){
                break;
            }else{
                counter++;
            }
        }
        for(int i=size;i>0;i--){
            if(array[i]==z2){
                break;
            }else{
                c++;
            }
        }
        int k=counter;
        for(int i=0;i<size-c;i++){
            a[i]=array[k];
            k++;
        }
        cout<<a<<endl;



    }




}
