def breakingRecords(score):
    min = max = score[0]
    minCount = maxCount = 0
    for i in score[1:]:
        if i > max:
            maxCount += 1
            max = i
        if i < min:
            minCount += 1
            min = i
    return maxCount, minCount


n = int(input())
score = list(map(int, input().split()))
print(*breakingRecords(score))
