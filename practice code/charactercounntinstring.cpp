#include <iostream>

using namespace std;
int main() 
{
   char str[100] = "Hi to everyone";
   int i = 0,k = 0, character[26] = {0},Char[26] = {0}, j,l;
   while (str[i] != '\0') 
   {
      if (str[i] >= 'a' && str[i] <= 'z') 
      {
         j = str[i] - 'a';
         ++character[j];
      }
      ++i;
   }
   while (str[k] != '\0') 
   {
      if (str[k] >= 'A' && str[k] <= 'Z') 
      {
         l = str[k] - 'A';
         ++Char[l];
      }
      ++k;
   }

   cout<<"Frequency of characters in the string are:"<< endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< character[i]<< endl;
   for (k = 0; k < 26; k++)
   cout<< char(k + 'A')<<" : "<< Char[k]<< endl;
   return 0;
}