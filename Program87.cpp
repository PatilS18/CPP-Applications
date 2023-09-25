#include<iostream>
using namespace std;

class Search
{
   public:
        int iCnt =0;  
        bool bFlag =false;

       bool Search(int Arr[], int iLength, int iNo)
      {
         for (iCnt=0; iCnt<iLength; iCnt++)
         {
            if(Arr[iCnt]== iNo)
            {
               bFlag=true;
               break;
            }
         }

         return bFlag;
      }
};

int main()
{
   int iSize = 0; 
   int *ptr= new int(iSize);
   
  bool bRet = false;
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
      cout<<ptr[iCnt];
    }

    cout<<"Enter the number you want to search"<<"\n";
    cin>>iValue;
     
    bRet = sobj.Search(ptr,iSize,iValue);
    if(bRet==true)
    {
      cout<<"Number is present in the value"<<bRet<<"\n";
    }
    else
    {
      cout<<"Number is not present in the value"<<bRet<<"\n";
    }

   return 0;
}