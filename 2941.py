word = input()

cro = ['c=','c-','dz=','d-','lj','nj','s=','z=']

count =0;

for c in cro:
    count += word.count(c)
    word = word.replace(c,' ')
    
    
print(len(word)+count-word.count(' '))
