//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N
//(цели броеви). Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
//
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.
//
//Пример.
//
//Влез:
//
//31
//
//4317652881415716945111576
//
//Излез:
//
//−1−1100−1−1100−1−1100−1−1100


#include <iostream>
using namespace std;
int main() {
    int x;
    int m, n;
    cin >> x;
    cin >> m >> n;
    int matrix[m][n];
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }


    for (i = 0; i < m; i++) {
        int sum = 0;
        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        if (sum > x) {
            for(j=0;j<n;j++) {
                matrix[i][j] = 1;
            }
        } else if (sum < x) {
            for(j=0;j<n;j++) {
                matrix[i][j] = -1;
            }
        } else{
            for(j=0;j<n;j++) {
                matrix[i][j] = 0;
            }
        }

    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}
