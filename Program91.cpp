#include<iostream>
using namespace std;


class Search
{
    public:
       int iCnt= 0;

   int SearchFirstOccurence(int Arr[],int iLength, int iNo)
   {
      for(iCnt=0; iCnt<iLength; iCnt++)
      {
         if(Arr[iCnt]==iNo)
         {
            break;
         }
      }

       if(iCnt == iLength)
         {
            return -1;
         }
         else
         {
            return iCnt;
         }
   }
};

int main()
{
   int iSize = 0; 
   int *ptr= new int(iSize);
   
  int iRet=0;
   int iCnt =0; 
   int iValue=0;

   Search sobj;

   cout<<"Enter the number of elements:"<<"\n";
   cin>>iSize;


   cout<<"Enter the elements:"<<"\n";
   for(iCnt =0; iCnt< iSize; iCnt++)
   {
      cin>>ptr[iCnt];
   }

    cout<<"Elements of the array are :"<<"\n";
    for (iCnt=0; iCnt<iSize; iCnt++)
    {
      cout<<ptr[iCnt]<<"\n";
    }

    cout<<"Enter the number you want to search"<<"\n";
    cin>>iValue;
     
   if(iRet == -1)
   {
      cout<<"There is no such element"<<"\n";
   }
   else
   {
      cout<<"The number"<<iValue<<"\n"<< "is occured at"<< iRet <<"\n";
   }
    

   return 0;
}