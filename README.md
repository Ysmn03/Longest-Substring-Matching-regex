# Longest-Substring-Matching-regex  
  
You are given two strings, a text string *text*, and a regex expression *regex*.
The string *regex* contains exactly one wildcard character(\*). A wildcard character(\*) 
matches any sequence of zero or more lowercase English characters. A regex matches some string
if it is possible to replace the wildcard character with some sequence of characters such that
the regex expression becomes equal to the string.
No other character can be changes. 
<br> <br>
For example, regex "abc*bcd" matches
"**abcbcd**,"**abc**cefg**bcd**" and "**abc**c**bcd**" whereas it does not match the strings
"**abc**bd", "abz**bcd**","**abc**d".
<br> <br>
Return the length of the longest substring of *text* that matches the expression *regex*.
Return *-1* if there is no such substring.
<br> <br>
**Constrains:** <br>
1<=|*text*|.|*regex*|<=10e6
*text* contains lowercase English Letters only.
*regex* contains lowercase English letters and exactly one wildcard(\*) character.
