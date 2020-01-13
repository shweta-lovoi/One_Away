There are three types of edits that can be performed on strings: insert a character, remove a character, or replace
a character. Given two strings, write a function to check if they are one edit (or zero edits) away.
 
 EXAMPLE
 
 pale, ple -> true
 
 pales, pale -> true
 
 pale, bale -> true
 
 pale, bake -> false
 
 going over each char in the string will give this a runtime of: n where n is the size of string 1 in worst case.
