#include<iostream>
using namespace std;

enum wordStarted  {NO, YES};

int main()
{

  //  STRING : "   this   is   a program."
  //  ( counting no of times a letter appears immediately after a blank space )

  // 1. CREATE A ENUMERATION isWordStarted
  // 2. GET THE INPUT STRING
  wordStarted wordstarted = NO;
  int wordcount = 0;
  string str;
  cout<<"\nPlease Enter the Sentence : ";
  getline(cin, str);
  // 3. SCAN EACH AND EVERY CHARACTER IN THE STRING
  for(int i=0;i<str.length();i++)
  {

    //   a. IF IT'S A BLANK CHARACTER, THEN SET wordStarted = NO
    if(str[i]==' ' || str[i]=='.' || str[i]=='?' || str[i]=='!')
      {
          wordstarted = NO;
      }
   //   B. Else
   //       check if the previous character was a blank space.
   //         if yes, [ word count ++] and set wordStarted = YES
   else
    {
      if(wordstarted == NO)
        {
            wordcount++;
            wordstarted = YES;
        }
    }

  }
  cout<<"\nThe Number of Words in the Sentence : "<<wordcount;

  return 0;
}
