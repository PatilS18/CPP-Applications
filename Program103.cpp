#include <iostream>
using namespace std;

//  intput 5
//  output A B C D E

class Display
{
   public:
    int iCnt =0;
    char ch = 'A';

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