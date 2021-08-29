year = gets.chomp().to_i

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    # 1. 4의 배수 이면서 100의 배수가 아니거나 
    # 2. 400의 배수인 경우 윤년 
    puts(1);
else 
    puts(0);
end