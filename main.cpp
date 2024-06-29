//
//  main.cpp
//  Leah Mirch - CS150 Project
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
 class university{
 private:

     string campus;
     int numberCredit;
     string courseIdentification;
     int departmentCourseId[2]={101,1};
     string courseInstructor;
     string Days;
     string Time;
     string building;
     string roomNum;
     int maxEnroll;
     int nS=0;
     string nStudnet[100000];
     string courseStatus;


 public:

     void setCampus(string s){
         campus=s;
     }
    
     void setNumberCredit(int n){
         numberCredit=n;
     }
    
     void setCourseIdentification(string n){
         courseIdentification=n;
     }

     void setDepartmentCourse(int n, int m){
         departmentCourseId[0]=n;
         departmentCourseId[1]=m;
     }
  
     void setCourseInstructor(string s){
         courseInstructor=s;
     }
  
    void setDay(string s){
        Days = s;
     }
    
    void setTime(string s){
        Time = s;
     }

    void setBuilding(string s){
      building = s;
     }
  
    void setRoomNum(string s){
      roomNum = s;
     }
 
    void setMaxEnroll(int n){
         maxEnroll=n;
     }
    
    void setNStudent(int n){
         nS=n;
         for(int i=0;i<n;i++){
             string s;
             cout<<" - Enter Student Identiciation Number: "<<endl;
             cin>>s;
             nStudnet[i]=s;
         }
     }
    
     void setCourseStatus(string s){
         courseStatus=s;
     }


     void display(){
         cout << endl;
         cout<<"Campus: "<<campus<<endl;
         cout<<"Credits: "<<numberCredit<<endl;
         cout<<"Course Identification Name: "<<courseIdentification<<endl;
         cout<<"Department Course Identication Number: "<<departmentCourseId[0]<< endl;
         cout<<"Section Number: "<<departmentCourseId[1]<<endl;
         cout<<"Instructor: "<<courseInstructor<<endl;
         cout<<"Meeting Days: "<<Days<< endl << "Time: "<<Time<<endl;
         cout<<"Building Identification Number: "<<building<< endl<< "Room Number: "<<roomNum<<endl;
         cout<<"Maximum Course Enrollment: "<<maxEnroll<<endl;
         cout<<"Number of Students Enrolled: "<<nS<<endl;
         cout<<"Student Identification Numbers:"<< endl;
         for (int i=0;i<nS;i++)
             cout<<" *"<< nStudnet[i];
            
         cout<<endl;
         cout<<"Course Status: "<<courseStatus << endl;
     }
 };

int main(){

    ifstream inFS;
    string a;
    int b;
    string c;
    int d = 0;
    int d2 = 0;
    string e;
    string f;
    string f2;
    string g;
    string g2;
    int h;
    

    inFS.open("textFile.txt");
       if (!inFS.is_open()) {
          cout << "Could not open file textFile.txt." << endl;
          return 1; // 1 indicates error
       }


        inFS >> a;
        inFS >> b;
        inFS >> c;
        inFS >> d;
        inFS >> d2;
        inFS >> f;
        inFS >> f2;
        inFS >> g;
        inFS >> g2;
        inFS >> h;
    
    
       cout << "Closing file textFile.txt." << endl;
       inFS.close();

    university u;

    u.setCampus(a);

    u.setNumberCredit(b);
   
    u.setCourseIdentification(c);
  
    u.setDepartmentCourse(d,d2);

    u.setDay(f);
    u.setTime(f2);
   
    u.setBuilding(g);
    u.setRoomNum(g2);

    u.setMaxEnroll(h);


    cout<<"Enter course instructor name:" << endl;
    cin>>e;
    u.setCourseInstructor(e);
   
    cout<<"Enter number of students to enroll:"<<endl;
    int i;
    cin>>i;
    u.setNStudent(i);
   
    string j;
    cout<<"Enter course status:" << endl;
    cin>> j;
    u.setCourseStatus(j);
 
   
    u.display();
    return 0;
}
