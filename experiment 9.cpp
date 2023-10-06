/*Name-Sanya Jaitly
Prn-22070123100
Exp_9(Part-A)*/

#include<iostream>
using namespace std;

void increment(int *a)
{
    (*a)++;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int i;
    int *ptr = &arr[i];  

    for (i = 0; i < 4; i++)
    {
        cout << *ptr << " ";
        cout << &arr[i] << endl;
        ptr++;
    }

    int arr1[] = {10, 20, 30, 40};
    int j;
    for (j = 0; j < 4; j++)
    {
        cout << arr[j] << endl;
    }

    int b = 2;
    increment(&b);
    cout << b << endl;

    int c = 15;
    int d = 20;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    swap(&c, &d);
    cout << "After swapping:" << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;

    char *str = "Symbiosis Institute of Technology";
    cout << *(str + 0) << *(str + 10) << *(str + 23);

    return 0;
}
/*
OUTPUT
10 0x7ffe03442030
20 0x7ffe03442034
30 0x7ffe03442038
40 0x7ffe0344203c
10
20
30
40
3
c: 15
d: 20
After swapping:
c: 20
d: 15
SIT
*/


/*
Exp_9(Part-B)
pointer_increment*/
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr;
    float fl_value = 34.56;
    float *fl_ptr;
    char cr_value = 'a';
    char *cr_ptr;

    aptr = &a;
    cout << "Value of a: " << a << endl;
    cout <<"Location of a: " <<&a << endl;
    cout <<"Value of aptr: " <<aptr << endl;

    int **aptr2 = &aptr;
    ++aptr;
    cout <<"Value of incremented aptr: " << aptr << endl;
    cout << "Value in double pointer aptr2"<<aptr2<< endl;
    

    fl_ptr = &fl_value;
    cout << "Value of float: " << fl_value << endl;
    cout << "Value of fl_ptr: " << fl_ptr << endl;
    ++fl_ptr;
    cout << "Value of Incremented fl_ptr: " << fl_ptr<< endl;


    cr_ptr = &cr_value;
    cout << "Value of character: " << cr_value << endl;
    cout << "Value of cr_ptr: " << (void*)cr_ptr << endl;
    ++cr_ptr;
    cout << "Value of Incremented cr_ptr: " << (void*)cr_ptr << endl;

    return 0;
}

/*
OUTPUT
Value of a: 10
Location of a: 0x61ff00
Value of aptr: 0x61ff00
Value of incremented aptr: 0x61ff04
Value in double pointer aptr20x61fefc
Value of float: 34.56
Value of fl_ptr: 0x61fef8
Value of Incremented fl_ptr: 0x61fefc
Value of character: a
Value of cr_ptr: 0x61fef7
Value of Incremented cr_ptr: 0x61fef8
*/


/*
Exp_9(Part-C)
pointer_swap*/
#include<iostream>
using namespace std;
void increment(int *a)
 {
    (*a)++;
 }
 void swap(int *a, int *b)
 {
   int t;
   t=*a;
   *a=*b;
   *b=t;
 }
int main() 
{
  int b=2; 
 increment(&b);
 cout<<b<<endl;
 int c=15;
 int d=20;
 cout<<"c:"<<c<<endl;
 cout<<"d:"<<d<<endl;
 swap(&c,&d);
 cout<<"After swapping:"<<endl;
 cout<<"c:"<<c<<endl;
 cout<<"d:"<<d<<endl;
 
 return 0;
}
/*
OUTPUT
c:15
d:20
After swapping:
c:20
d:15
*/


/*
Exp_9*/
# include <iostream>
using namespace std;

void increment(int *a)
 {
    (*a)++;
 }

int main()
{
    int a = 10;
    int*aptr;
    aptr=&a;
    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<&a<<endl;
    aptr++;
    cout<<aptr<<endl;


    float b = 10;
    float *bptr;
    bptr=&b;
    cout<<b<<endl;
    cout<<*bptr<<endl;
    cout<<&b<<endl;
    bptr++;
    cout<<bptr<<endl;

   
    char c = 10;
    char *chptr;
    chptr=&c;
    cout<<c<<endl;
    cout<<(void*)chptr<<endl;
    chptr++;
    cout<<(void*)chptr<<endl;
   
   int**aptr2 = &aptr;
   ++aptr;
   cout<<"value of increamented aptr:"<<aptr<<endl;
   cout<<"value in double pointer aptr2:"<<aptr2<<endl;
   

   int arr[]={10,20,30};
   cout<<*arr<<endl;
   
   int i;
 int *ptr = &arr[i];
 for(i=0;i<4;i++)
 {
        cout<<*ptr<<" ";
        cout<<&arr[i]<<endl;
        ptr++;
 }
 int arr1[]={10,20,30,40};
 int j;
 for(j=0;j<4;j++)
 {
        cout<<arr[j]<<endl;
 }

}
/*Output
10
10
0x61fef4
0x61fef8
10
10
0x61feec
0x61fef0


0x61feeb
0x61feec
value of increamented aptr:0x61fefc
value in double pointer aptr2:0x61fef0
10
*/