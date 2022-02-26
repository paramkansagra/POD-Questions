Longest ordered vowel sequence


A word ‘W’ is said to be an ordered vowel sequence if the vowels in ‘W’ are ordered [‘a’, ‘e’, ‘i’, ‘o’, ‘u’].

For example, if the word is ‘apple’ then it is an ordered vowel sequence whereas the word ‘elephant’ is not.

An ordered vowel sequence ‘S’ is said to be the longest, if the count of occurrences of unique vowels is the highest. For example, the count of occurrences of unique vowels in ‘captain’ is 2.

Given a line of text, develop an algorithm and C program to display the longest vowel sequence.

If there is more than one word being the longest, then all the words should be printed in the order of their occurrence.

For example, if the given text is ‘a tailor has become a sailor after he has experienced a voyage with his captain friend’, then the longest unique vowel sequences are ‘tailor’ and ‘sailor’.

Note: The text contains lowercase letters. To get a line of text in a variable str, use the following code snippet:

scanf(“%[^\n]s”, str);

Input format:

Enter a line of text

Output format:

Print the longest unique vowel sequences. If there is more than one such sequence, then print each one in new line in the order of their occurrence