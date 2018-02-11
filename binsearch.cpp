//=========================================================
//Your name: Alejandro Monje
//Complier:  g++ compiler
//File type: client
//=========================================================
using namespace std;
#include <iostream>


int binarySearch(int ar[], int find, int size);


int main()
{
  int P; // will set P equal to whatever is returned by binarySearch later
  int size = 10;  // array size is 10 

  //hard code the array with 1, 3, 5, 7, 9, 11, 13, 15, 17, 19
  int ar[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

  int find; // find will be used to get a number to look for from the user
  //int comparison = 0; // to check with sensei's demo
   
  //asks the user to enter a number to search for in array
  cout << "Please enter a number to look for: " << endl;
  cin >> find; // holds the value that the user enters
  
  
  //calls binarySearch and sets P to the value that is returned by BinarySearch
  P = binarySearch(ar, find, size);
  
  //if binarySearch returns -1 then that means the number wasn't found
  if(P == -1)
    {
      cout << "The number that you have entered was not found: " <<  "    :(  " << endl;
    }
  else//else the number was found and displays a message that says it was found and the
    { //position that it is in.
      cout << "The number " << find << " was found in position: " << P <<  "   :) " << endl;
    }
  return 0;//The program ends.
}


int binarySearch(int ar[], int find, int size)
{

  
  int middle;// The middle index value
  int small = 0;// The lowest index value
  int big = size - 1;// The highest index value
  while(small <= big)// exits the loop is small is larger than big
    {
     
      middle = (small + big)/2;//find the middle value and set middle to it each time
      //comparison ++; // to check with sensei's demo
      // if the ar[middle] matches the number the user enters the it is found
      // return middle plus 1
      if(ar[middle] == find)
	{  
          //To compare using sensie's demo
          //cout << "Compared " << comparison << " times: " << endl;
	  return middle + 1;// return middle + 1 exits the loop and returns the value
	}
      if(ar[middle] > find)//if the ar[middle] is greater than move
	{                  // to the smaller side of array making big = middle - 1.
	  big = middle - 1;
	}
      else //if the ar[middle] is smaller than move
	{  // to the bigger side of array making small = middle - 1.
	  small = middle + 1;
	}
    }
   // to check with sensei's demo
   //cout << "Compared " << comparison << " times: " << endl;
   //If it wasn't found returns -1 to exit
  return -1;
}
