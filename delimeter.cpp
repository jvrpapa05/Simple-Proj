//Using Delimeters

#include <iostream>
using namespace std;
string data = "John Vince Papa,156-0868,Electronics Engineering";

void run(){
    string name;
    int nameSub;

    string studentNo;
    int studentNoSub;

    string course;

    int i = 0;
    int dFound = 0;

    cout << data << endl;

    for(i = 0; i<data.length(); i++){
        //cout << i << endl;
        if(data[i] == ','){

            if(dFound == 0){
                nameSub = i;
                name = data.substr(0, nameSub);
                cout << "Name: " << name << endl;
            }else if (dFound == 1){
                studentNoSub = i;
                studentNo = data.substr(nameSub + 1, studentNoSub - (nameSub +1));
                cout << "Studet No: " << studentNo << endl;

                course = data.substr(studentNoSub + 1, data.length());
                cout << "Course: " << course << endl;
            }
            dFound++;
        }
    }
}


int main(){
    cout << "DEMO" << endl;
    run();
    while(1){
        cout << "\nYour turn!" << endl;
        cout << "Just Follow this Format: name,student-no,course" << endl;
        getline(cin, data);
        run();
    }
}





