/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
*/ 

#include<iostream>
using namespace std;

class Display
{
   public:
     char ch='\0';
     int i=0, j=0;
   
   Display(int iRow, int iCol)
   {
      for(i=1, ch='a'; i<=iRow; i++, ch++)
      {
         for(j=1; j<=iCol; j++)
         {
            cout<<ch<<"\t";
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