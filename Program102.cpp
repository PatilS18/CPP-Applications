#include <iostream>
using namespace std;

//  intput 5
//  output a b c d e f

class Display
{
   public:
    int iCnt =0;
    char ch = 'a';

   Display(int no)
   {
      for(iCnt=1; iCnt <= no; iCnt++)
      { 
         cout<<ch<<"\t";
         ch++;
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