#include <iostream>
using namespace std;

class Display
{
   public:
    int iCnt =0;

   Display(int no)
   {
      for(iCnt=0; iCnt<= no; iCnt++)
      {
         cout<<"\t"<<iCnt;
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