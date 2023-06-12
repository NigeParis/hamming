# Instructions
# Calculate the Hamming Distance between two DNA strands.

/**
*   PROTOTYPE DE FUNCTION : int compute ( const char *str1, const char *str2)
*   ARGS : takes two pointers to strings
*   RETURN : ERROR -1 when string not of equal length, or returns the number of caracters different in the string
*/

Your body is made up of cells that contain DNA. Those cells regularly wear out and need replacing, which they achieve by dividing into daughter cells. In fact, the average human body experiences about 10 quadrillion cell divisions in a lifetime!

When cells divide, their DNA replicates too. Sometimes during this process mistakes happen and single pieces of DNA get encoded with the incorrect information. If we compare two strands of DNA and count the differences between them we can see how many mistakes occurred. This is known as the "Hamming Distance".

We read DNA using the letters C,A,G and T. Two strands might look like this:

    GAGCCTACTAACGGGAT

    CATCGTAATGACGGCCT

    ^ ^ ^  ^ ^    ^^

They have 7 differences, and therefore the Hamming Distance is 7.

The Hamming Distance is useful for lots of things in science, not just biology, so it's a nice phrase to be familiar with :)

Implementation notes
The Hamming distance is only defined for sequences of equal length, so an attempt to calculate it between sequences of different lengths should not work.
-1 is the return value for ERRROR


<img width="502" alt="Capture d’écran 2023-06-12 à 16 54 13" src="https://github.com/NigeParis/hamming/assets/128382762/3fb6c16c-d564-4051-80fe-ed6a4df71128">
