/Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
//Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната
//k се заменуваат со минималната вредност од матрицата А.

#include <iostream>

using namespace std;

int main() {
    int array[101][101];
    int m,n;
    int r,k;
    cin>>m>>n;
    cin>>r>>k;
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++) {
            cin>>array[i][j];
        }
    }
    int min=array[0][0];
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++) {
            if(array[i][j]<min){
                min=array[i][j];
            }
        }
    }
    for(int i=0;i<r;i++){
        for (int j = 0; j < k; j++) {
            array[i][j]=min;
        }
    }
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }





}
