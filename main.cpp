#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "StudentInfo.h"
#include <iostream>

using namespace std;

int main()
{
    UnsortedType<int> ut;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    int length;
    length=ut.LengthIs();


    for(int i=0; i<length; i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout << temp << " ";
    }

    cout<<endl;
    cout<<length<<endl;

    ut.InsertItem(1);
    ut.ResetList();

    length=ut.LengthIs();

    for(int i=0; i<length; i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout << temp << " ";
    }

    cout <<endl;
    cout <<endl;


    bool flag=false;
    int temp=4;
    ut.RetrieveItem(temp, flag);

    if(flag)
        cout << "Item is found"<<endl;

    else
        cout << "Item is not found"<<endl;


    flag=false;
    temp=5;
    ut.RetrieveItem(temp, flag);

    if(flag)
        cout << "Item is found"<<endl;

    else
        cout << "Item is not found"<<endl;

    flag=false;
    temp=9;
    ut.RetrieveItem(temp, flag);

    if(flag)
        cout << "Item is found"<<endl;

    else
        cout << "Item is not found"<<endl;

    flag=false;
    temp=10;
    ut.RetrieveItem(temp, flag);

    if(flag)
        cout << "Item is found"<<endl;

    else
        cout << "Item is not found"<<endl;

    cout <<endl;
    flag=false;
    if(ut.IsFull()) flag=true;

    if(flag)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;


    ut.DeleteItem(5);
    ut.ResetList();

    flag=false;
    if(ut.IsFull()) flag=true;

    if(flag)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    cout<<endl;

    ut.DeleteItem(1);
    ut.ResetList();

    for(int i=0; i<ut.LengthIs(); i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout << temp << " ";
    }
    cout<<endl;

    ut.DeleteItem(6);
    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        int temp;
        ut.GetNextItem(temp);
        cout << temp << " ";
    }
    cout<<endl;

    UnsortedType<StudentInfo> st;

    st.InsertItem(StudentInfo(15234, "Abdullah", 2.6));
    st.InsertItem(StudentInfo(13732, "Muhammad", 3.9));
    st.InsertItem(StudentInfo(13569, "Ali", 1.2));
    st.InsertItem(StudentInfo(15467, "Saad", 3.1));
    st.InsertItem(StudentInfo(16285, "Mahdi", 3.1));

    st.DeleteItem(StudentInfo(15467,"Saad", 3.1));


    flag=false;
    StudentInfo t1 = StudentInfo(13569, "Sandor", 1.2);
    st.RetrieveItem(t1, flag);

    if(flag)
    {
        cout << "Item is found"<<endl;
        t1.display();
        cout<<endl<<endl;
    }
    else
        cout << "Item is not found"<<endl;


    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(t1);
        t1.display();
    }



}

