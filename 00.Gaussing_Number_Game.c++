#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Interface(){
    cout<<"\n\t\t\tWelcome to Guess Number Game ..!!!"<<endl;
    cout<<"\n\t\tYou Have to Guess Number Between 1 and 100."<<endl;
    cout<<"\t\tYou'll Have Limited Choices Based on Level You Choose."<<endl;
    
}

void operation(int option ,int &answer , int & num){
    
    cout<<"\n\t\tYou have "<<option<<" Choices for Guessing the Secret Number."<<endl;
    int choicesleft = option;
    for(int i=1; i<=option; i++){
        cout<<"\n\t\tEnter Number : ";
        cin>>answer;
        if(answer == num){
            cout<<"\n\t\tWell Played..!! You Won,"<<num<<" is the Secret Number"<<endl;
            cout<<"\t\tThanks..! for Playing...."<<endl;
             cout<<"\n\t\tPlay the Game Again With US..!!"<<endl;
            break;
        }
        else{
            cout<<"\n\t\tNope , "<<answer<<" is not the Right Number"<<endl;
            if(answer > num){
                cout<<"\t\tThe Secret Number is Smaller than the Number You Have Choosen"<<endl;
            }
            else{
                 cout<<"\t\tThe Secret Number is Greater than the Number You Have Choosen"<<endl;
                }
            
            choicesleft--;
            cout<<"\t\tYou have "<<choicesleft<<" Remaining Choice"<<endl;
            
            if(choicesleft == 0){
                cout<<"\n\t\tYou Couldn't find the Secret Number , it was "<<num<<", You Lose...!!\n\n";
                cout<<"\t\tPlay the Game Again to Win..!!\n\n"; 
            }
        }

    }
}

int main(){
    Interface();
    while(true){
        cout<<"\n\t\t\t1 Easy \n\t\t\t2 Medium \n\t\t\t3 Difficult \n\t\t\t0 Ending the Game";
        int choice;
        cout<<"\n\n\t\tEnter Your Choice : ";
        cin>>choice;

        srand(time(0));
        int num = 1 + (rand()%100);
        
        int answer;
        if (choice == 1){
            operation(10 , answer , num);
        }
        else if(choice == 2){
            operation(7, answer, num);
        }
        else if(choice == 3){
            operation(5, answer, num);
        }
        else if(choice == 0){
            break;
        }
        else{
            cout<<"Wrong Choice , Enter Valid Choice to Play the Game {0,1,2,3}"<<endl;
        }
    }
    return 0;
}























    