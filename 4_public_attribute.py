class A:
    value = 0 #Public Attribute
    name = '' #Public Attribute
    
    def display(self):
        print("This is class")


obj = A()

obj.display()

obj.value = 100
obj.name = 'Object'

print(obj.value)
print(obj.name)
