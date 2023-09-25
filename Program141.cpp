/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   a   a   a   a   a
    b   *   b   b   b   b
    c   c   *   c   c   c
    d   d   d   *   d   d   
    e   e   e   e   *   e
    f   f   f   f   f   *         
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
      
      for(i =1 , ch='a'; i <= iRow; i++ ,ch++)
      {
         for(j=1; j <= iCol; j++)
         {
           if (i == j)
           {
            cout<<"*\t";
           }
           else
           {
             cout<<ch<<"\t";
           }
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