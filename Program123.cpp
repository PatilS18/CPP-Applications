/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    1   &   3   &
    1   &   3   &
    1   &   3   &
    1   &   3   &

*/  

#include<iostream>
using namespace std;

class Display
{
   public:
    int i=0,j=0;
    
   Display(int iRow,int iCol)
   {
      for(i=1; i <= iRow; i++)
      {
         for(j=1; j <= iCol; j++)
         {
            if(j%2==0)
            {
               cout<<"&\t";
            }
            else
            {
               cout<<j<<"\t";
            }
         }
          cout<<"\n";
      }
   }
   
};

int main()
{
   int iValue1=0, iValue2=0;

   cout<<"Enter the NUmber of Rows : "<<"\n";
   cin>>iValue1;

   cout<<"Enter the Numbers of Column : "<<"\n";
   cin>>iValue2;

   Display dobj(iValue1,iValue2);

   return 0;
}