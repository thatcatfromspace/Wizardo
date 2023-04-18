#include <iostream>
#include "dirent.h"

using namespace std;
int main() 
{

DIR *directory;   

struct dirent *x;   

cout<<"Please enter file name with its extension"<<endl;  

string s;  

cin>>s;  

bool result = false;  

if (( directory= opendir ("F:\\Visual Studio\\Wizardo\\assets\\encrypt")) != NULL) {      
  
  while ((x = readdir (directory)) != NULL) {
    
    {
      
      if(s==x->d_name)
      {
        result=true;  
        
            break;     
        
      }
      
      
  }
    
   
  }
 
  
  closedir (directory); //close directory....
  
  
  
}

 if(result)   // if file is present then....
  {
    cout<<"file is present"<<endl;   
  }
  else    //if file is not present....
  {
    cout<<"file is not present"<<endl;
  } 
  



}