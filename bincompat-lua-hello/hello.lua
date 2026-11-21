print("Hello from Lua on Unikraft!")
print(_VERSION)
local s = 0
for i = 1, 100 do s = s + i end
print(string.format("sum=%d pi=%.2f", s, math.pi))
