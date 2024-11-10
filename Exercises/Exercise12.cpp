//Од стандарден влез се читаат знаци се додека не се прочита извичник.
//Во вака внесениот текст се скриени цели броеви (помали од 100).
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот
//(пр. cin >> noskipws >> znak;)

#include <iostream>

using namespace std;

int main() {
    char character;
    int sum = 0;
    int currentNumber = 0;


    cin >> noskipws;
    while (cin >> character && character != '!') {
        if (character >= '0' && character <= '9') {

            int digit = character - '0';
            currentNumber = currentNumber * 10 + digit;
        } else {

            sum += (currentNumber < 100) ? currentNumber : 0;
            currentNumber = 0;
        }
    }


    sum += (currentNumber < 100) ? currentNumber : 0;

    cout << sum << endl;

    return 0;
}
