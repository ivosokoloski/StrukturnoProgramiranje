//Виктор е студент на ФИНКИ кој моментално размислува како да си го испланира семестарот за евентуално да добие стипендија.
//Виктор добро се знае себеси и има истражувано за предметите, при што тој може да си ги претпостави своите оценки по потенцијалните предмети што би ги земал.
//Тој сака да си го испланира семестарот така што би го имал најголемиот просек можно по неговото завршување.
//На стандарден влез се внесуваат 6 оценки за предметите. Првите 5 оценки се за задолжителни предмети кои мора да ги запише.
//Следниот предмет е изборен дополнителен предмет, кој не е задолжителен да го запише. Тој целокупно мора да има 5 или 6 предмети во семестар.
//Тој ќе ја избере опцијата со највисок просек.
//На стандарден излез да се испечати колку предмети се запишуваат и во нов ред да се испечати 1 доколку Виктор добива стипендија, во спротивно 0.
//Виктор добива стипендија доколку запишува 6 предмети и просекот му е 8.5 или над
//
//Виктор is a FINKI student who is currently thinking about how to plan his semester in order to eventually acquire a scholarship.
//Виктор knows himself well and has researched the classes, whereby he knows his grades for his future classes ahead of time before taking them.
//He wants to plan his semester so that he has the highest possible grade average for that semester.
//On standard input, 6 grades are entered for the subjects. The first 5 grades are for compulsory classes that he must enroll in.
//The following class is choosable and optional to be taken, Виктор has the option to either enroll in the optional class or just enroll in his 5 compulsory to have a total of 5 or 6 subjects in a semester.
//He will choose the option that grants him the higher grade average.
//On standard output print how many subjects are enrolled in and in a new line print 1 if Виктор acquires a scholarship, 0 if not.
//Виктор acquires a scholarship if he enrolled in 6 classes and has a grade average of 8.5 or better.


#include <iostream>
using namespace std;
int main(){
    int o1,o2,o3,o4,o5,o6;
    cin>>o1>>o2>>o3>>o4>>o5>>o6;
    float p1,p2;
    p1=(o1+o2+o3+o4+o5)/5.0;
    p2=(o1+o2+o3+o4+o5+o6)/6.0;
    if(p2>p1) {
        cout << "Enrolled 6 subjects" << endl;
        if (p2 > 8.5)
            cout << 1 << endl;
        else if(p2<8.5)
            cout << 0 << endl;
    }else{
        cout<<"Enrolled 5 subjects"<<endl;
        cout<<0<<endl;
    }






    return 0;
}
