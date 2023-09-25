#include <iostream>
using namespace std;

// Input :  5
// Output : 1   2   3   4   5   4   3   2   1 

class Display
{
   public:
    int iCnt =0;

   Display(int No)
   {
      for(iCnt=1; iCnt <= No; iCnt++)
      { 
         cout<<iCnt<<"\t";
      }
      for(iCnt=No-1; iCnt>=1;iCnt--)
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