//Да се напише програма која за петцифрен број, внесен од стандарден влез, ќе го "искастри".
//Еден број е искастрен ако неговата најлева и најдесна цифра се избришани.
//На излез да се испечатат искастрениот број и во нов ред збирот на цифрите кои се кастрат.
//Појаснување: бројот 54321 искастрен е 432. Цифрите кои се кастрат се 5 и 1.
//Write a program that, for a five-digit number entered from standard input, will 'sharpen' it.
//A number is 'sharpened' if its leftmost and rightmost digits are removed.
//Output the sharpened number, and in the second line, print the sum of the digits that were sharpened.
//Explanation: The number 54321 is sharpened to 432. The digits that are sharpened are 5 and 1.

#include <iostream>
using namespace std;
int main(){
    int broj, b1, b2, ib;
    cin>>broj;
    b1 = broj/10000;
    b2 = broj%10;
    ib = (broj%10000)/10;
    cout<<ib<<endl<<b1+b2;
    return 0;

}