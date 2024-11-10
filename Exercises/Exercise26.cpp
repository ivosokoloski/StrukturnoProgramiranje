//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
//Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
//се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи,
//се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
//
//Влез:
//9
//a!bcdedcb!a
//Kfd?vsvv98_89vvsv?dfK
//Ccsvsdvdfv
//342425vbbcb
//352!2353696969625
//gdg??dfg!!
//5336346644747
//8338736767867
//12344321
//Излез:
//
//Kfd?vsvv98_89vvsv?dfK



#include <iostream>
#include <cstring>
bool ispalindrom(char*str){
    int start=0;
    int end= strlen(str)-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
bool znak(char *str){
    if(ispalindrom(str)){
        for(int i=0;i<strlen(str);i++){
            if(ispunct(str[i])){
                return true;
            }
        }
    }
    return false;
}





using namespace std;
int main(){
    char str[101];


    int n;
    cin>>n;
    char tmp[101];
    int c=0;
    long long max=0;
    for(int i=0;i<n;i++){
        cin.getline(str,101);
        int counter=0;

        if(znak(str)) {
            c++;
            for (int j = 0; j < strlen(str); j++) {
                counter++;
            }
            if (counter > max) {
                max = counter;

                strcpy(tmp, str);

            }
        }

    }
    if(c==0){
        cout<<"Nema!";
        return 0;
    }
    cout<<tmp;






}
