#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int id, t_mark;
    char name[50];
    char sec;

    Student(int id, char n[], char sec, int t_mark)
    {
        this->id = id;
        this->sec = sec;
        this->t_mark = t_mark;
       int namelen = strlen(n);
        for (int i = 0; i <= namelen; i++) {
            name[i] = n[i];
            if (n[i] == '\0') 
            break;
        }
      
    }

};


Student topper(Student s1, Student s2, Student s3){

    if(s1.t_mark >= s2.t_mark && s1.t_mark >= s3.t_mark){
        return  s1;
    }
    else if(s2.t_mark >= s1.t_mark && s2.t_mark >= s3.t_mark){
        return s2;
    }
    else{
        return s3;
    }
   
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {

        int id1, id2, id3, t_mark1, t_mark2, t_mark3;
        char name1[50], name2[50], name3[50];
        char sec1, sec2, sec3;

        cin >> id1;
        cin >> name1;
        cin >> sec1 >> t_mark1;

        cin >> id2;
        cin >> name2;
        cin>> sec2 >> t_mark2;

        cin >> id3;
        cin >> name3;
        cin >> sec3 >> t_mark3;

        Student s1(id1, name1, sec1, t_mark1);
        Student s2(id2, name2, sec2, t_mark2);
        Student s3(id3, name3, sec3, t_mark3);

        Student result=topper(s1, s2, s3);

        cout << result.id << " " << result.name << " " << result.sec << " " << result.t_mark << endl;
    }
    return 0;
}