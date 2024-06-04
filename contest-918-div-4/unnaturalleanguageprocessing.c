// Lura was bored and decided to make a simple language using the five letters a, b, c, d, e. There are two types of letters:

// vowels — the letters a and e. They are represented by V.
// consonants — the letters b, c, and d . They are represented by C.

// There are two types of syllables in the language: CV (consonant followed by vowel) or CVC (vowel with consonant before and after).
// For example, ba, ced, bab are syllables, but aa, eda, baba are not.
// A word in the language is a sequence of syllables. Lura has written a word in the language, but she doesn't know how to split it into syllables. Help her break the word into syllables.

// For example, given the word bacedbab, it would be split into syllables as ba.ced.bab (the dot . represents a syllable boundary).

#include <stdio.h>
#include <stdlib.h>

char *alocateString(int size) {
    char *pointer = NULL;
    do {
        pointer = (char *)malloc(sizeof(char) * size);
    } while (pointer == NULL);
    return pointer;
}

int isVowel(char letter) {
    if (letter == 'a' || letter == 'e') {
        return 1;
    }
    return 0;
}

char *wordSeparatedBySyllables(char *word, int wordLength) {
    char *resultWord = alocateString(wordLength + (wordLength / 2));
    int currResultIndex = 0;
    
    for (int i = 0; i < wordLength; i++) {
        resultWord[currResultIndex++] = word[i];
        if (word[i + 1] == '\0') {
            break;
        } else if ((isVowel(word[i]) && isVowel(word[i + 2])) || (!isVowel(word[i]) && !isVowel(word[i + 1]))) {
            resultWord[currResultIndex++] = '.';
            wordLength++;
        }
    }

    resultWord[currResultIndex] = '\0';

    return resultWord;
}


int main() {
    int amountInputs;
    scanf("%d", &amountInputs);

    int wordLength;
    char *word;
    char *resultWord;
    while (amountInputs--) {
        scanf("%d%*c", &wordLength);
        
        word = alocateString(wordLength + (wordLength / 2));
        scanf("%[^\n]%*c", word);
        
        resultWord = wordSeparatedBySyllables(word, wordLength);
        printf("%s\n", resultWord);

        free(word);
        free(resultWord);
    }
    
    return 0;
}