#include<iostream>
using namespace std;

class Display
{
   public:
      int iCnt =0;

    Display(int No)
    {
      for(iCnt=1; iCnt<= No; iCnt++)
      {
         cout<<"#\t";
      }
      cout<<"\n"; 
    }
};

int main()
{
   int iFrequency=0;

   cout<<"Enter the freuency to print #"<<"\n";
   cin>>iFrequency;

   Display dobj(iFrequency);

   return 0;
}