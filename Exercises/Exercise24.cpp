//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
//За секој од нив да се испечати максималната цифра во посебен ред.
//Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
//Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

#include <iostream>

using namespace std;
int funk(int broj,int max){
    if(broj==0){
        return max;

    }
    int b=broj%10;
    if(b>max){
        max=b;
    }
    return funk(broj/10,max);
    
}

int main() {

    int brojj;

    while (cin>>brojj){
        int maxx=0;

        cout<<funk(brojj,maxx)<<endl;

    }
    
}
