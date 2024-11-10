//Се внесуваат низи од значи од стандарден влез.
//Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
//Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
//Потоа во нов ред се печати бројот на појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.
//
//Пример:
//
//IO is short for Input Output
//medioio medIo song
//#
//Излез:
//
//io
//        ou
//io
//        oi
//io
//        io
//6


#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;


int main() {
    char array[101];
    char a[101];
    int counter=0;
    while (cin.getline(array,101)){
        if(array[0]=='#'){
            break;
        }
        for(int i=0;i< strlen(array);i++){
            array[i]= tolower(array[i]);
        }

        for(int i=0;i< strlen(array);i++){
            if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u'){
                if(array[i+1]=='a'||array[i+1]=='e'||array[i+1]=='i'||array[i+1]=='o'||array[i+1]=='u'){
                    counter++;
                    cout<<array[i]<<array[i+1]<<endl;
                }
            }
        }


    }
    cout<<counter;





}
