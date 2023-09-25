#include <iostream>
using namespace std;

// Input : 7
// Output : 2 4 6 8 10 12 14


class Display
{
   public:
    int iCnt =0;

   Display(int no)
   {
      for(iCnt=1; iCnt <= no; iCnt++)
      { 
         cout<<iCnt*2<<"\t";
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