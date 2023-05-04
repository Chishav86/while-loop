 #include <iostream>
using namespace std;

int main() {
    float a,b;
    int num = 1;
    num= num*5;
   
    num *= 5;

    cout<<"enter your number :";
    cin>>a;
    cout<<"enter your next number :";
    cin>>b;
  
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for multiplication"<<endl;
    
   
    int option;
    cin>> option;

    switch(option)
    {
            
    case 1:cout<<a << "+" <<b<<" = "<< a+b ;
    break;
    case 2:cout<<a << "-" <<b <<" = " << a-b ;
    break;
    case 3:cout<<a << "*" <<b <<" = " << a*b ;
    break;
    case 4:cout<<a << "/" <<b <<" = " << a/b ;
}
    return 0;
}
