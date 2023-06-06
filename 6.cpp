//constructor with new
#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char* name;
    int lenght;
public:
    String();
    String(char* s);
    void display();
    void join(String &a,String &b);
};
String::String()
{
    name = new char[lenght+1];
}
String::String(char* s)
{
    lenght = strlen(s);   //address of lenght
    name  = new char [lenght +1];
    strcpy(name,s);
}
void String::display()
{
    cout<<name<<endl;
}
void String::join(String &a,String &b)
{
    lenght = a.lenght + b.lenght;
    delete name;
    name = new char[lenght+1];

    strcpy(name,a.name);
    strcat(name,b.name);
}

int main()
{
    char* first = "Rabbi";
    String name1(first),name2("lois"),name3("Rakib"),s1,s2;

    s1.join(name1,name2);
    s2.join(s1,name3);

    name1.display();
    name2.display();
    name3.display();

    s1.display();
    s2.display();
    return 0;
}
