//
//  isUnique.cpp
//
//  Created by Louie Shi on 5/28/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/*
    ASCII vs Unicode
 Assume ASCII for this problems: 128-character alphabet
*/

bool isUnique(string str)
{
    bool alphInd[128];
    int asciiVal;
    
    for(int i = 0; i < 128; i++) //Make everything in the array false initially
    {
        alphInd[i] = false;
    }
    
    if(str.length() > 128)
    {
        return false;
    }
    else
    {
        for(int i = 0; i < str.length(); i++)
        {
              asciiVal = str[i];  //ASCII value is index to bool array
            
              if(alphInd[asciiVal] == true)
              {
                  return false;
              }
              else
              {
                  alphInd[asciiVal] = true;
              }
        }
    }
    return true;
}

int main(int argc, const char * argv[])
{
    string word = "helo $";
    
    cout << isUnique(word) << endl;
    
    return 0;
}
