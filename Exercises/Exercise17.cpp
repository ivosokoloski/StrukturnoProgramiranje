//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
//Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што
//е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина,
//тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//
//Пример:
//
//Влез:
//
//3 6
//
//1 2 2 3 4 5
//
//1 1 2 2 3 3
//
//1 2 3 4 5 6
//
//Излез:
//
//5 1 1


#include <iostream>

using namespace std;
float aps(float broj){
    if(broj<0){
        broj=-broj;
    }
    return broj;
}

int main() {
    int matrix[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        float counter=0;
        float sum=0;
        for(int j=0;j<n;j++){
            counter++;
            sum+=matrix[i][j];
        }
        float ar=sum/counter;
        float naj=0;
        float fin=1;
        for(int j=0;j<n;j++){
            float b=ar-matrix[i][j];
            if(aps(b)>naj){
                naj=aps(b);
                fin=matrix[i][j];
            }
        }
        cout<<fin<<" ";

    }

}
