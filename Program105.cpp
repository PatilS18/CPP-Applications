#include <iostream>
using namespace std;

// Input : 7
// Output : a   1   b   2   c   3   d   4   e   5   f   6   g   7


class Display
{
   public:
    int iCnt =0;
    char ch = '\0';

   Display(int no)
   {
      for(iCnt=1, ch='A'; iCnt <= no; iCnt++, ch++)
      { 
         cout<<ch<<"\t"<<iCnt<<"\t";
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