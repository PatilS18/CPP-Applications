/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *   *   *   *
        *   *   *
            *   *
                *
            
            
*/

#include<iostream>
using namespace std;

class Display
{
   public:
    int i=0,j=0;
    
   Display(int iRow,int iCol)
   { 
       if(iCol != iRow)
      {
         cout<<"Invalid input"<<"\n";
         return;
      }
      
      for(i = iRow; i >= 1; i--)
      {
         for(j= iCol; j >= 1; j--)
         if(i >= j)
         {
            cout<<"*\t";
         }
         else
         {
            cout<<" \t";
         }
          cout<<"\n";
      }
   }
   
};

int main()
{
   int iValue1=0, iValue2=0;

   cout<<"Enter the Number of Rows : "<<"\n";
   cin>>iValue1;

   cout<<"Enter the Numbers of Column : "<<"\n";
   cin>>iValue2;

   Display dobj(iValue1,iValue2);

   return 0;
}