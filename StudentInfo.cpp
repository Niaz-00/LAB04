#include "StudentInfo.h"
#include<iostream>

using namespace std;

StudentInfo::StudentInfo()
{
    id = 0;
    char t[10] = "NULL";
    name = t;
    cgpa = 0;
}

StudentInfo::StudentInfo(int i, char *n, double c)
{
    id = i;
    name = n;
    cgpa = c;
}

void StudentInfo::display()
{
    cout << id << ",\t" << name << ",\t" << cgpa << endl;
}



bool StudentInfo::operator!=(StudentInfo s)
{
    if(cgpa==s.cgpa && id==s.id && name==s.name) return false;

    return true;
}


StudentInfo StudentInfo::operator+(StudentInfo s)
{
    char str[10] = "tempName";
    StudentInfo temp(id+ s.id, str, (cgpa + s.cgpa));

    return temp;
}


bool StudentInfo::operator==(StudentInfo s)
{
    if(cgpa==s.cgpa && id==s.id && name==s.name)
        return true;

        return false;
}
