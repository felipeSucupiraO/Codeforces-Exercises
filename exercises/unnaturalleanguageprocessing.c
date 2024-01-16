// Lura was bored and decided to make a simple language using the five letters a, b, c, d, e. There are two types of letters:

// vowels — the letters a and e. They are represented by V.
// consonants — the letters b, c, and d . They are represented by C.

// There are two types of syllables in the language: CV (consonant followed by vowel) or CVC (vowel with consonant before and after).
// For example, ba, ced, bab are syllables, but aa, eda, baba are not.
// A word in the language is a sequence of syllables. Lura has written a word in the language, but she doesn't know how to split it into syllables. Help her break the word into syllables.

// For example, given the word bacedbab, it would be split into syllables as ba.ced.bab (the dot . represents a syllable boundary).

#include <stdio.h>

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    while (quantidadeInputs--) {
        // i was thinking on how to identify the different syllables
        // I think I need to create a new array containing only Cs and Vs accordingly to the input
    }
    
    return 0;
}