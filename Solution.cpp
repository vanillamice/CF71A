#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
     string word;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
 
        cin >> word;
      if(word.size()>10){
 
 
 
 
        //the mountain:1
        //the viber:0
        cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
 
 
      }
      else
      {
 
          cout << word << endl;
      }
 
 
    }
 
 
  return 0;
}
