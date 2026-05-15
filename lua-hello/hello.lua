-- Hello World in Lua on Unikraft
print("Hello from Lua on Unikraft!")

-- Basic demonstration
local function greet(name)
    return string.format("Hello, %s!", name)
end

print(greet("Unikraft"))
print("Lua version: " .. _VERSION)
