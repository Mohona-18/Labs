l=["apple", "banana","orange"]
print(l)

for x in l:
    print(x)

for i in range(len(l)):
    print(l[i])
print("\nwhile")

i=0
while i < len(l):
    print(l[i])
    i+=1
    
[print(x)for x in l]

l.clear()
    
[print(x)for x in l]

y=("a","b","c")
print(y)
print(y[1])
#y[1]="d"#Error: tuple is immutable/unchangeable
z=list(y)
z[1]="d"
y=tuple(z)
print(y)

def my_function(*kids):
  print("The youngest child is " + kids[2])
  print (type(kids))

my_function("Emil", "Tobias", "Linus")

