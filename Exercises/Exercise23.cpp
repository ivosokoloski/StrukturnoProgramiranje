//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица,
//односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.
//



#include <iostream>
using namespace std;
int main() {
    int m[100][100];
    int N;
    cin >> N;
    int n=N*2;
    int i,j;
    for(i=0;i<N;i++) {
        for (j = 0; j < n; j++) {
            cin>>m[i][j];
        }
    }
    int b[100][100];
    for(i=0;i<N;i++) {
        for (j = 0; j < N; j++) {
            b[i][j]=m[i][j];
            b[i+N][j]=m[i][j+N];
        }
    }
    for(i=0;i<n;i++) {
        for (j = 0; j < N; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }




}