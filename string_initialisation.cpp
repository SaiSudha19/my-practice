#include <iostream>

using namespace std;

int main()
{
    char S[10]="hello";
    cout<<S<<endl;
    
    char A[ ]="hello";
    cout<<A<<endl;
    
    char B[]={'h','e','l','l','o','\0'};
    cout<<B<<endl;
    
    char C[]={'h','e','l','l','o','\0','g','a'};//prints upto o
    cout<<C<<endl;
    
    char D[]={65,66,67,68,'\0'};
    cout<<D<<endl;
    
    char E[]={65,66,67,68,0,69,70};//prints upto 68
    cout<<E<<endl;
    
    char *F="hello";
    cout<<F<<endl;
    
    string g="hello";
    cout<<g<<endl;
    
    return 0;
}
