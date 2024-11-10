//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
//Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>9){
        for(int i=n-1;i>0;i--) {
            int x = i;
            int obratenbroj=0;
            int cifri=0;
            int br;
            while (x > 0) {
                br=x%10;
                obratenbroj=obratenbroj*10+br;
                cifri++;
                x/=10;
            }

            if(obratenbroj%cifri==0){
                cout<<i<<endl;
                break;
            }

        }

    }else
        cout<<"Brojot ne e validen"<<endl;
    return 0;
}
