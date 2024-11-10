//На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
//што означува колку броеви следуваат по него во истиот ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
//Читањето на броеви завршува кога ќе се прочита бројот 0.


#include <iostream>
using namespace std;
int funk();


int main() {
    int array[100];
    int size;
    while(cin>>size&&size>0) {
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        int max=0;
        int krbr;

        for (int i = 0; i < size; i++) {
            int br=array[i];


            while(array[i]>9){
                array[i]/=10;
            }
            if(array[i]>max){
                max=array[i];
                krbr=br;
            }

        }
        cout<<krbr<<endl;





    }


}
