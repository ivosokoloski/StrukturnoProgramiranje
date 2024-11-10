
//Да се провери дали одреден внесен шестцифрен број е симетричен. 
//Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со претпоследната… 
//Пример за симетрични броеви: 123321, 805508, 999999.
//Да се испечати 1 ако е симетричен, 0 ако не е симетричен.
//
//Check if a specific inputted six-digit number is symmetric. 
//This means that the first digit of the number should be the same as the last digit, 
//the second digit should be the same as the second-to-last digit, and so on.
//For example, symmetric numbers are 123321, 805508, and 999999. If the number is symmetric, print 1, and if it's not symmetric print 0.

#include <iostream>
using namespace std;
int main(){
    int broj;
    cin>>broj;
    int c1,c2,c3,c4,c5,c6;
    c1=broj/100000;
    c2=broj/10000%10;
    c3=broj/1000%10;
    c4=broj/100%10;
    c5=broj/10%10;
    c6=broj%10;
    if(c1==c6&&c2==c5&&c3==c4)
        cout<<1;
    else
        cout<<0;

    return 0;

}
