#include<iostream>
using namespace std;

class Comparison
{
   public:
        int iCnt =0;  
      
       int Maximum(int Arr[], int iLength)
        { 
           int iMax = Arr[0];
         for(iCnt =0; iCnt<iLength; iCnt++)
         {
            if(Arr[iCnt] > iMax )
            {
               iMax = Arr[iCnt];
            }
         } 
           return iMax;
        }

      int Minimum(int Arr[], int iLength)
      {
          int iMin = Arr[0]; 
         for(iCnt =0; iCnt<iLength; iCnt++)
         {
            if(Arr[iCnt] < iMin)
            {
               iMin = Arr[iCnt];
            }
         }
         return iMin;
      }  

};

int main()
{
   int iSize = 0; 
  int *ptr= new int(iSize);

   
   int iRet=0;
   int iCnt =0; 

   Comparison cobj;

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
     
   iRet=cobj.Maximum(ptr,iSize);
   {
      cout<<"Maximum number of array is:"<<iRet<<"\n";
   }

   iRet=cobj.Minimum(ptr, iSize);
   {
      cout<<"Minimum number of array is :"<<iRet<<"\n";
   }

   return 0;
}