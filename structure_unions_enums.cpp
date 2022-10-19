#include<iostream>
using namespace std;

   typedef struct employee
    {
        /* data */
        int EId;
        char favchar;
       float salary;

    }ep;
   // int main(){
// ep lokesh;
// lokesh.EId=1;
// lokesh.favchar='h';
// lokesh.salary = 12000;
// cout<<"The value is "<<lokesh.salary<<endl;
union money
{
int rice;
char car;
float pounds;
};

int main( ){
  enum meal{breakfast , lunch, dinner};
  meal m1 = breakfast;
  cout<<m1<<endl;
  cout<<(m1 == 0);
  // cout<<breakfast;
  // cout<<lunch<<dinner;
  // ep lokesh;
  // union money m1;
  // m1.car = 'c';
  // cout<<m1.car;
    return 0;
}