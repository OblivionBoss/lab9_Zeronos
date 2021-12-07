#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,height,property;
    string status[] = {"MARRIED","ONE-NIGHT-STAND","BEST FRIEND","FRIEND","UNFRIEND"};
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160){
            cout << "Your status = " << status[4];
        }
        else if(height < 175){
            cout << "Your status = " << status[3];
        }
        else{
            cout << "Enter your property: ";
            cin >> property;
            if(property > 69000000){
                cout << "Your status = " << status[0];
            }
            else{
                cout << "Your status = " << status[1];
            }
        }
    }
    else if(age < 30){
        cout << "Enter your property: ";
        cin >> property;
        if(property > 10000000){
            cout << "Your status = " << status[2];
        }
        else{
            cout << "Your status = " << status[4];
        }
    }
    else{
        cout << "Your status = " << status[4];
    }
return 0;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
