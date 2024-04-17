#include<iostream>
#include<math.h>
using namespace  std;

class Calulator{
    float num1 , num2;
    public:
        Calulator(){
            num1 = 0;
            num2 = 0;
        }
        void Take_Inputs(){
            cout<<"\n\t\tEnter Number1 : ";
            cin>>num1;
            cout<<"\n\t\tEnter Number2 : ";
            cin>>num2;
        }
        float addition(){
            return num1 + num2;
        }
        float subtraction(){
            return num1 - num2;
        }
        float multiplication(){
            return num1 * num2;
        }
        float division(){
            if(num2 == 0){
                return INFINITY;
            }
            return num1 / num2;
        }
        
};


int main(){
    int ch;
    Calulator obj;
    cout<<"\n\t\t***Simple Calculator***"<<endl;
    cout<<"\n\t\t1 Addition (+) \n\t\t2 Subtraction(-) \n\t\t3 Multiplication(*) \n\t\t4 Division(/) \n\t\t0 Exit(0)";    
    
    do{
        cout<<"\n\t\tEnter Choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
                obj.Take_Inputs();
                obj.addition();
                cout <<"\n\t\tAnswer : "<<obj.addition()<<endl;
            break;
        case 2:
                obj.Take_Inputs();
                cout <<"\n\t\tAnswer : "<<obj.subtraction()<<endl;
            break;
        case 3:
                obj.Take_Inputs();
                cout <<"\n\t\tAnswer : "<<obj.multiplication()<<endl;
            break;
        case 4:
                obj.Take_Inputs();
                cout <<"\n\t\tAnswer : "<<obj.division()<<endl;
            break;
        }
    }while(ch<=4 && ch>=1);

    return 0;
}