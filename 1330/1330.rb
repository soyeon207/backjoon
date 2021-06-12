ab = gets.chomp.split(" ")
a = ab[0].to_i
b = ab[1].to_i

if a < b 
    puts "<"
elsif a > b
    puts ">"
else
    puts "=="
end