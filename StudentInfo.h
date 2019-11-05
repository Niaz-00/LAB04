#ifndef StudentInfo_H_INCLUDED
#define StudentInfo_H_INCLUDED

#include <iostream>
#include <string>


class StudentInfo
{
    private:
        int id;
        char *name;
        double cgpa;

    public:
        StudentInfo();
        StudentInfo(int, char*, double);
        void display();
        StudentInfo operator+(StudentInfo s);
        bool operator!=(StudentInfo s);
        bool operator==(StudentInfo s);
};




#endif // StudentInfo_H_INCLUDED

