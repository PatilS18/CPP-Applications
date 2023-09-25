#include <iostream>
using namespace std;

// Input :  5
// Output : 1   2   3   4   5   5   4   3   2   1

class Display
{
   public:
    int iCnt =0;

   Display(int no)
   {
      for(iCnt=1; iCnt <= no; iCnt++)
      { 
         cout<<iCnt<<"\t";
      }
      for(iCnt=no; iCnt>=1;iCnt--)
      {
         cout<<iCnt<<"\t";
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