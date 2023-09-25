/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D   E
    A   B   C   D   E   F             
*/  
 

#include<iostream>
using namespace std;

class Display
{
   public:
    int i=0,j=0;
    char ch = '\0';
    
   Display(int iRow,int iCol)
   { 
       if(iCol != iRow)
      {
         cout<<"Invalid input"<<"\n";
         return;
      }
      
      for(i=1; i <= iRow; i++)
      {
         for(j=1, ch='A'; j <= i; j++,ch++)
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

   cout<<"Enter the Number of Rows : "<<"\n";
   cin>>iValue1;

   cout<<"Enter the Numbers of Column : "<<"\n";
   cin>>iValue2;

   Display dobj(iValue1,iValue2);

   return 0;
}