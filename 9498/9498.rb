score = gets.chomp.to_i
grade = 'F'

case score
when 90..100 then grade = 'A'
when 80..89 then grade = 'B'
when 70..79 then grade = 'C'
when 60..69 then grade = 'D'
end

puts grade;