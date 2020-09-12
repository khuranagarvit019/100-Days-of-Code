# Link To Question on Hackerrank: https://www.hackerrank.com/challenges/validating-postalcode/problem

regex_integer_in_range = r"_________"	# Do not delete 'r'.
regex_alternating_repetitive_digit_pair = r"_________"	# Do not delete 'r'.

s = input()
print(s.isdigit() and 100000 <= int(s) <= 999999 and sum([s[i] == s[i+2] for i in range(0, 4)]) < 2)

import re
P = input()

print (bool(re.match(regex_integer_in_range, P)) 
and len(re.findall(regex_alternating_repetitive_digit_pair, P)) < 2)
