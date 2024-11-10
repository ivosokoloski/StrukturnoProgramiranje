//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
//Ако не постои таков број, да се испечати NE.

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    int b1;
    int softnumber=-1;
    int i;


    for (i = a; i <= b; i++) {
        temp=i;
        bool temp1=true;
        while(temp>0) {
            b1 = temp % 10;
            if (b1 % 2!=0) {
                temp1=false;
                break;

            }
            temp /= 10;

        }
        if (temp1) {
            softnumber=i;
            break;
        }


    }
    if(softnumber!=-1) {
        cout << softnumber;
    } else
        cout<<"NE";



    return 0;

}

