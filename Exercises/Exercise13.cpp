//Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
//а потоа последователно се внесуваат парови цели броеви (a, b).
//Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
//Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
//како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

#include <iostream>
using namespace std;
int main(){
    int z;
    cin>>z;
    int a,b;
    int sum=0;
    float counter=0;
    float counter1=0;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }else {
            sum = a + b;

            if (sum == z) {
                counter++;
            }
        }
        counter1++;
    }
    cout<<"Vnesovte "<<counter<< " parovi od broevi chij zbir e "<<z<<endl;
    float procent=(counter*100)/counter1;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<procent<<"%";

    return 0;
}
