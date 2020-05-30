#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;

class college{
    private:
        char clg_ID[5];
        string clg_Name,location;
        int No_of_Teachers,No_of_Non_Teaching_Staff;
};

class Person{
    private:
        string name,address;
        int phone_No1,Phone_No2,date_of_birth;
};

class employee{
    private:
        int sal;
        char desig[20],ID[5],joining_date;
};

class Non_Teaching_Staff{

};

class Teacher{
    private:
        string email;
        char dept[5],subject_code[10];
};

class student{
    private:
        char roll[10];
        int no[9];
};

int main()
{

}