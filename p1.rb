total = 0

(0...1000).each do |x|
  total += x if x % 3 == 0 || x % 5 == 0
end

puts total
