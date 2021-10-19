x = gets.chomp().to_i
y = gets.chomp().to_i

quadrant = 1
quadrant = 2 if x < 0 && y > 0
quadrant = 3 if x < 0 && y < 0
quadrant = 4 if x > 0 && y < 0

pp quadrant