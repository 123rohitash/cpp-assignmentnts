#include<iostream>
#include "Header.h";
#include<crtdbg.h>
using namespace std;


int main()
{
    {
        int arr1[] = {1,2,3,4,5,6};
        //int* ptr = arr1;
        Cinteger c1(6);
        Cinteger c2(arr1,6);
        c2.display();
        c1.display();
        Cinteger c3;
        c3.display();
        Cinteger c4(c3);
        c4.display();
        //Cinteger c5(55);
        Cinteger c5 = c1 + c4;
         c1.operator+=(100);
         c1 = ++c4;
        c1.display();
        /*cout << "c1 before is " << endl;
        c1.display();
        c1 = c5;
        c1.display();
        c5.display();*/
        
        //Smartpointer s1();

    //    std::cout << "Hello World!\n";
    }
    cout << "leaks " << _CrtDumpMemoryLeaks() << endl;
}
