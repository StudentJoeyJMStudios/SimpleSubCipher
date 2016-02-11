//
//  main.c
//  CS166Hw2
//
//  Created by Joseph Richardson on 2/7/16.
//  Copyright © 2016 JMStudios. All rights reserved.
//

#include <stdio.h>
#include<string.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    char cipherText[] = "PBFPVYFBQXZTYFPBFEQJHDXXQVAPTPQJKTOYQWIPBVWLXTOXBTFXQWAXBVCXQWAXFQJVWLEQNTOZQGGQLFXQWAKVWLXQWAEBIPBFXFQVXGTVJVWLBTPQWAEBFPBFHCVLXBQUFEVWLXGDPEQVPQGVPPBFTIXPFHXZHVFAGFOTHFEFBQUFTDHZBQPOTHXTYFTODXQHFTDPTOGHFQPBQWAQJJTODXQHFOQPWTBDHHIXQVAPBFZQHCFWPFHPBFIPBQWKFABVYYDZBOTHPBQPQJTQOTOGHFQAPBFEQJHDXXQVAVXEBQPEFZBVFOJIWFFACFCCFHQWAUVWFLQHGFXVAFXQHFUFHILTTAVWAFFAWTEVOITDHFHFQAITIXPFHXAFQHEFZQWGFLVWPTOFFA";
    char plainText[] = "PBFPVYFBQXZTYFPBFEQJHDXXQVAPTPQJKTOYQWIPBVWLXTOXBTFXQWAXBVCXQWAXFQJVWLEQNTOZQGGQLFXQWAKVWLXQWAEBIPBFXFQVXGTVJVWLBTPQWAEBFPBFHCVLXBQUFEVWLXGDPEQVPQGVPPBFTIXPFHXZHVFAGFOTHFEFBQUFTDHZBQPOTHXTYFTODXQHFTDPTOGHFQPBQWAQJJTODXQHFOQPWTBDHHIXQVAPBFZQHCFWPFHPBFIPBQWKFABVYYDZBOTHPBQPQJTQOTOGHFQAPBFEQJHDXXQVAVXEBQPEFZBVFOJIWFFACFCCFHQWAUVWFLQHGFXVAFXQHFUFHILTTAVWAFFAWTEVOITDHFHFQAITIXPFHXAFQHEFZQWGFLVWPTOFFA";
    char englishLetters [26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    
    int countLetters[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double analytics[27] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

    
    int tempCount = sizeof(englishLetters) / sizeof(char);
    
    int i = 0;
    while (i < strlen(cipherText))
    {
        char currChar = cipherText[i];
    
        int j = 0;
        while (j < tempCount)
        {
            char tempC = englishLetters[j];
        
            if(currChar == tempC)
            {

                countLetters[j]++;
            }
        
            j++;
        }
        i++;
    }
    for (int strIndex = 0; strIndex < strlen(cipherText); strIndex++)
    {
        char currChar = cipherText[strIndex];
        if(currChar == 'A')
        {
            plainText[strIndex] = 'D';
        }
        else if(currChar == 'B')
        {
            plainText[strIndex] = 'H';
        }
        else if(currChar == 'C')
        {
            plainText[strIndex] = 'P';
        }
        else if(currChar == 'D')
        {
            plainText[strIndex] = 'U';
        }
        else if(currChar == 'E')
        {
            plainText[strIndex] = 'W';
        }
        else if(currChar == 'F')
        {
            plainText[strIndex] = 'E';
        }
        else if(currChar == 'G')
        {
            plainText[strIndex] = 'B';
        }
        else if(currChar == 'H')
        {
            plainText[strIndex] = 'R';
        }
        else if(currChar == 'I')
        {
            plainText[strIndex] = 'Y';
        }
        else if(currChar == 'J')
        {
            plainText[strIndex] = 'L';
        }
        else if(currChar == 'K')
        {
            plainText[strIndex] = 'K';
        }
        else if(currChar == 'L')
        {
            plainText[strIndex] = 'G';
        }
        else if(currChar == 'M')
        {
            plainText[strIndex] = ' ';
        }
        else if(currChar == 'N')
        {
            plainText[strIndex] = 'X';
        }
        else if(currChar == 'O')
        {
            plainText[strIndex] = 'F';
        }
        else if(currChar == 'P')
        {
            plainText[strIndex] = 'T';
        }
        else if(currChar == 'Q')
        {
            plainText[strIndex] = 'A';
        }
        else if(currChar == 'R')
        {
            plainText[strIndex] = ' ';
        }
        else if(currChar == 'S')
        {
            plainText[strIndex] = ' ';
        }
        else if(currChar == 'T')
        {
            plainText[strIndex] = 'O';
        }
        else if(currChar == 'U')
        {
            plainText[strIndex] = 'V';
        }
        else if(currChar == 'V')
        {
            plainText[strIndex] = 'I';
        }
        else if(currChar == 'W')
        {
            plainText[strIndex] = 'N';
        }
        else if(currChar == 'X')
        {
            plainText[strIndex] = 'S';
        }
        else if(currChar == 'Y')
        {
            plainText[strIndex] = 'M';
        }
        else if(currChar == 'Z')
        {
            plainText[strIndex] = 'C';
        }
    }
    printf("%s\n\n", cipherText);
    printf("%s\n\n", plainText);
    
    return 0;
}

