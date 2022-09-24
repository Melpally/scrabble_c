#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        //The first player wins!
        printf("Player 1 wins!\n");
    }
    else if (score1 == score2)
    {
        //The scores are equal
        printf("Tie!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}
//writing the function itself
int compute_score(string word)
{
    // TODO: Compute and return score for string
    char new_word1[strlen(word)];
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        //COnverting everything to uppercase
        new_word1[i] = toupper(word[i]);
    }
    //Do not create static variables!
    int sum = 0, asc_char;
    for (int j = 0, n = strlen(word); j < n; j++)
    {
        //A for loop runs for every letter in a word
        asc_char = new_word1[j];
        //For each letter checking its value and adding it
        if ((asc_char - 64) % 27 == 1)
        {
            //The case A
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 2)
        {
            //The case B
            sum += 3;
        }
        else if ((asc_char - 64) % 27 == 3)
        {
            //Now I would say: "Enough comments! In 169 lines of code"
            sum += 3;
        }
        else if ((asc_char - 64) % 27 == 4)
        {
            //How many comments do you need?
            sum += 2;
        }
        else if ((asc_char - 64) % 27 == 5)
        {
            //The case whatever
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 6)
        {
            sum += 4;
        }
        else if ((asc_char - 64) % 27 == 7)
        {
            sum += 2;
        }
        else if ((asc_char - 64) % 27 == 8)
        {
            sum += 4;
        }
        else if ((asc_char - 64) % 27 == 9)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 10)
        {
            sum += 8;
        }
        else if ((asc_char - 64) % 27 == 11)
        {
            sum += 5;
        }
        else if ((asc_char - 64) % 27 == 12)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 13)
        {
            sum += 3;
        }
        else if ((asc_char - 64) % 27 == 14)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 15)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 16)
        {
            sum += 3;
        }
        else if ((asc_char - 64) % 27 == 17)
        {
            sum += 10;
        }
        else if ((asc_char - 64) % 27 == 18)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 19)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 20)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 21)
        {
            sum += 1;
        }
        else if ((asc_char - 64) % 27 == 22)
        {
            sum += 4;
        }
        else if ((asc_char - 64) - 64 % 27 == 23)
        {
            sum += 4;
        }
        else if ((asc_char - 64) % 27 == 24)
        {
            sum += 8;
        }
        else if ((asc_char - 64) % 27 == 25)
        {
            //The case Y
            sum += 4;
        }
        else if ((asc_char - 64) % 27 == 26)
        {
            //The case Z
            sum += 10;
        }

    }
    //The end - returning the sum
    return sum;
}