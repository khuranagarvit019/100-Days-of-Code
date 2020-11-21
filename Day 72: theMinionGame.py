def minion_game(string):
    # your code goes here
    vowels = 'AEIOU'
    Kevin_score = 0
    Stuart_score = 0
    for i in range(len(s)):
        if s[i] in vowels:
            Kevin_score += (len(s)-i)
        else:
            Stuart_score += (len(s)-i)
        

    if Kevin_score > Stuart_score:
        print("Kevin", Kevin_score)
    elif Kevin_score < Stuart_score:
        print("Stuart", Stuart_score)
    else:
        print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)
