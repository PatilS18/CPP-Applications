/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    1   2   3   4   5
    1   2   3   4   5
    1   2   3   4   5

*/  

#include<iostream>
using namespace std;

class Display
{
   public:
     int iCnt=0;
     int i=0;
   
   Display(int iRow, int iCol)
   {
      for(iCnt=1; iCnt<=iRow; iCnt++)
      {
         for(i=1; i<=iCol; i++)
         {
            cout<<i<<"\t";
         }
         cout<<"\n";
      }
   }
};

int main()
{
   int iValue1=0, iValue2=0;

   cout<<"Enter the number of Rows:"<<"\n";
   cin>>iValue1;

   cout<<"Enter the number of Column:"<<"\n";
   cin>>iValue2;

   Display dobj(iValue1,iValue2);

   return 0;
}