/*
Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int vowel = 0 , consonent = 0 ;
    int length = str.length();
    
    
    for ( int i = 0 ; i < length ; i++ ) 
    {
        str[i] = toupper(str[i]);
        
    }  
    for ( int i = 0 ; i < length ; i++ ) 
    {   
        
        
        if (isalpha(str[i])){

            if ( str[i]=='A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
            {
                
                
                 vowel++;
            }
            else{
                 consonent++;
            }
        }
    }  

    cout<<"Number of vowel: "<<vowel<<endl;
    cout<<"Number of consonent: "<<consonent<<endl;

}