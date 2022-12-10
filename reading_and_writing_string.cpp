#include <iostream>

using namespace std;

int main()
{
    /*char s[20];
    cout<<"enter your name";
    cin>>s;
    cout<<"welcome"<<s<<endl;*/
/*
    char b[20];
    cout<<"enter your name: ";
    cin.getline(b,20);// cin.get(b,20); 
    cout<<"welcome "<<b<<endl;
    
    char c[20];
    cout<<"enter your name: ";
    cin.getline(c,20);
    cout<<"welcome "<<c<<endl;
    */
    
    char b[20];
    cout<<"enter your name: ";
    cin.get(b,20); 
    cout<<"welcome "<<b<<endl;
    
    cin.ignore();
    
    char c[20];
    cout<<"enter your name: ";
    cin.get(c,20);
    cout<<"welcome "<<c<<endl;
    

    return 0;
}
