#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream out("test.txt");
    out<<"Hola mundo";
    out<<1234;
    out<<3.5;
    out<<5.2f;
    out<<true;
    out<<"Hola mundo";

    out.put('t');
    out.put(65); //solo un char con un put
    out.close();

    ifstream in("test.txt");
    string str;
    int a;
    double b;
    float c;
    bool d;
    char e;
    string f;

    in>>a;
    in>>b;
    in>>c;
    in>>d;
    in>>e;
    in>>f;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;


    //in>>str; //la siguiente linea hace los mismo que estao
    //getLine(in,str);

    cout<<str;

    return 0;
}
