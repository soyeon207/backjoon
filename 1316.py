N = int(input())
group_count = 0

for i in range(0,N):
    word = input();
    before_word = '0';
    not_overlap_word=[]
    for j in list(word):
        if before_word != j:
            not_overlap_word.append(j)
        before_word = j;

    count = 0;
    
    for k in not_overlap_word:
        if not_overlap_word.count(k) == 1:
            count+=1
            
    if count == len(not_overlap_word):
        group_count+=1

print(group_count);
