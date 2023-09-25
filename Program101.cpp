#include <iostream>
using namespace std;

//  intput 7
//  output 7 * 6 * 5 * 4 * 3 * 2 * 1 *

class Display
{
   public:
    int iCnt =0;

   Display(int no)
   {
      for(iCnt=no; iCnt >= 1; iCnt--)
      {
         cout<<iCnt<<"\t"<<"*\t";
      }
      cout<<"\n";
   }
};

int main()
{
   int iFrequency=0;

   cout<<"Enter the number:"<<"\n";
   cin>>iFrequency;

   Display dobj(iFrequency);

   return 0;
}