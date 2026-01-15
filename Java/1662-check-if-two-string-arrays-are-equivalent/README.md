# Check If Two String Arrays Are Equivalent

## Problem Description
Given two string arrays `word1` and `word2`, return `true` if the two arrays represent the same string, and `false` otherwise.

A string is represented by an array of strings if the concatenation of all the strings in the array forms the original string.

## Example 1
**Input:** `word1 = ["ab", "c"]`, `word2 = ["a", "bc"]`  
**Output:** `true`  
**Explanation:** `"ab" + "c" = "abc"` and `"a" + "bc" = "abc"`

## Example 2
**Input:** `word1 = ["a", "b"]`, `word2 = ["0", "b"]`  
**Output:** `false`  
**Explanation:** `"a" + "b" = "ab"` but `"0" + "b" = "0b"`

## Constraints
- `1 <= word1.length, word2.length <= 10^3`
- `1 <= word1[i].length, word2[i].length <= 10^3`
- `word1[i]` and `word2[i]` consist of lowercase letters

## Approach
Concatenate all strings in both arrays and compare the results.

## Solution
```java
class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String s1 = String.join("", word1);
        String s2 = String.join("", word2);
        return s1.equals(s2);
    }
}
```
