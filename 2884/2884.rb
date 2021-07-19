time = gets().split(' ')

hour = time[0].to_i
minute = time[1].to_i

before45 = minute - 45

if before45 < 0
    hour -= 1
    minute = 60 + before45
    hour = 23 if hour < 0  # 코드가 복잡해지는게 싫어서 조건문을 축약해서 사용 
else
    minute -= 45
end

puts("#{hour} #{minute}") # puts(hour.to_s + " " + minute.to_s) 로 쓸 수도 있지만 syntax 로 사용하는게 더 간단